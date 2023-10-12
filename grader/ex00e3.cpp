#include<bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;++i) cin >> v[i];
    sort(v.begin(), v.end());
    for(int i=1;i<=n;++i) {
        if(i != v[i-1]) {
            cout << "NO"; 
            return 0;
        }
    }
    cout << "YES";
}