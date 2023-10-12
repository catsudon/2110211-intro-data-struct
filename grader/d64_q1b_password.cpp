#include<bits/stdc++.h>
using namespace std;

int n,m,l;
map<string,bool> mp;
int decode[69];

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m >> l;
    for(int i=0;i<l;++i) {
        cin >> decode[i];
    }
    for(int i=0;i<n;++i) {
        string a; cin >> a;
        mp[a] = 1;
    }
    for(int i=0;i<m;++i) {
        string a; cin >> a;
        for(int j=0;j<l;++j) a[j] = ( a[j] - 97 + (decode[j]%26) ) % 26 + 97;
        if(mp.find(a) != mp.end()) cout << "Match\n";
        else cout << "Unknown\n";

    }
}