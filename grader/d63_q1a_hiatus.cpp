#include<bits/stdc++.h>
using namespace std;
vector<int> v;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n,m; cin >> n >> m;
    for(int i=0;i<n;++i) {
        int a,b; cin >> a >> b;
        v.push_back(a*1000+b);
        // cout << "-----" << a*1000+b << "------\n";
    }

    sort(v.begin(), v.end());

    while(m--) {
        int a,b; cin >> a >> b; 
        int hsh = a*1000+b;
        auto it = lower_bound(v.begin(), v.end(), hsh);
        if(*it == hsh) {
            cout << "0 0 ";
            continue;
        }
        if(hsh < v[0]) {
            cout << "-1 -1 ";
            continue;
        }
        it--;
        cout << *it/1000 << " " << *it%100 << " ";
    }
}