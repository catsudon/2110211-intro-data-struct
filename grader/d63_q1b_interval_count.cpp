#include<bits/stdc++.h>
using namespace std;

vector<int> v;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n,m,k; cin >> n >> m >> k;
    for(int i=0;i<n;++i) {
        int a; cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    while(m--) {
        int a; cin >> a;
        int mn = max(0,a-k);
        int mx = min(1'000'000'000,a+k);
        auto p1 = lower_bound(v.begin(), v.end(), mn);
        auto p2 = upper_bound(v.begin(), v.end(), mx);

        cout << p2-p1 << " ";
    }


}