#include<bits/stdc++.h>
using namespace std;

vector<int> v;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int q; cin >> q;
    while (q--) {
        string cmd; cin >> cmd;
        if(cmd == "pb") {
            int val; cin >> val;
            v.push_back(val);
        }

        if(cmd == "sa") sort(v.begin(),v.end());

        if(cmd == "sd") sort(v.begin(),v.end(),greater<int>());
    
        if(cmd == "r") reverse(v.begin(), v.end());

        if(cmd == "d") {
            int i; cin >> i;
            v.erase(v.begin()+i);
        }
    }

    for(auto it: v) cout << it << " ";
}