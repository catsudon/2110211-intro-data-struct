#include<bits/stdc++.h>
using namespace std;

map<string, int> mp;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    while(n--) {
        string a; cin >> a;
        mp[a]++;
    }

    for(auto it : mp) {
        string key = it.first;
        int val = it.second;
        if(val <= 1) continue;
        cout << key << " " << val << endl;
    }
}