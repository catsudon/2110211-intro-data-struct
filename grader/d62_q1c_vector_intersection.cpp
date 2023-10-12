// same code as ds02_intersection
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n,m; cin >> n >> m;
    vector<int> a,b,c;
    for(int i=0;i<n;++i) {
        int z; cin >> z;
        a.push_back(z);
    }

    for(int i=0;i<m;++i) {
        int z; cin >> z;
        b.push_back(z);
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    
    int pre = a[0]-1;
    for(auto it : a) {
        if(it == pre) continue;
        pre = it;
        
        auto r = lower_bound(b.begin(), b.end(), it);
        if(r != b.end() and *r == it) cout << it << " ";
    }
}