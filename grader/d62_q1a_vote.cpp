#include<bits/stdc++.h>
using namespace std;

map<string,int> mp;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n,k; cin >> n >> k;
    for(int i=0;i<n;++i) {
        string a; cin >> a;
        mp[a]++;
    }

    vector<int> v;
    for(auto it : mp ) {
        v.push_back(-it.second);
    }
    sort(v.begin(), v.end());

    int pre = 0;
    for(auto &it : v) {
        it*=-1;
        k--;

        if(it == 0) {
            cout << pre;
            return 0;
        }

        if(k == 0) {
            cout << it;
            return 0;
        }

        pre = it;
    }

    cout << pre;



}