#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll level(ll k, ll a) {
    ll lvl = 0;
    while(a!=0) {
        a-=1;
        a/=k;
        lvl++;
    }
    return lvl;
}

int relation(ll k, ll a, ll b) {
    ll bik = max(a,b);
    ll smol = min(a,b);
    ll temp = bik;
    if(bik == smol) return 4;
    if((bik-1)/k == smol) return 1;

    while(temp > smol) temp=(temp-1)/k; // cuz we already returned the case bik == smol
    if(temp == smol) return 2;

    if(level(k,bik) == level(k,smol)) return 4;
    return 3;
    
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int q; cin >> q;
    while(q--) {
        ll k,a,b; cin >> k >> a >> b;
        cerr << relation(k,a,b) << " ";
    }
}