#include<bits/stdc++.h>
#define ll long long
using namespace std;

map<ll,ll> dad_of;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n,m; cin >> n >> m;
    while(n--) {
        ll a,b; cin >> a >> b;
        dad_of[b] = a;
    }

    while(m--) {
        ll a,b; cin >> a >> b;
        if(a == b or dad_of.find(a) == dad_of.end() or dad_of.find(b) == dad_of.end()) {cout << "NO\n"; continue;}
        if(dad_of.find(dad_of[a]) == dad_of.end() or dad_of.find(dad_of[b]) == dad_of.end()) {cout << "NO\n"; continue;}
        
        if(dad_of[dad_of[a]] == dad_of[dad_of[b]]) cout << "YES\n";
        else cout << "NO\n";
    }

}