#include<bits/stdc++.h>
using namespace std;

map<string, int> mp;
int mx = 0;
string ans;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    while(n--) {
        string a; cin >> a;
        mp[a]++;
    }

    for(auto it : mp) if(it.second >= mx) mx=it.second, ans=it.first;

    cout << ans << " " << mx;
}