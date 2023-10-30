#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    queue<int> q;
    vector<int> ans;
    int m,op; cin >> m >> op;
    q.push(op);
    while(q.size())
    {
        int v = q.front(); q.pop();
        ans.push_back(v);
        if(v*2+1 < m) q.push(v*2+1);
        if(v*2+2 < m) q.push(v*2+2);
    }
    cout << ans.size() << endl;
    for(auto it:ans) cout << it << " ";
    
}