#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int> > v;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n,m; cin >> n >> m;
    for(int i=0;i<n;++i) {
       int a,b;  cin >> a >> b;
       v.push_back({a,1}); v.push_back({b,10});
    }
    sort(v.begin(), v.end());
    while (m--) {
        int a ; cin >> a;
        auto lb = lower_bound(v.begin(), v.end(), pair<int,int>({a,5}));
        if(lb == v.end() or (*lb).second != 10) cout << 0 << " ";
        else cout << 1 << " ";
    }
}