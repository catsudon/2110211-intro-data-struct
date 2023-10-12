#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<int> mx(50'009,1);

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    vector<int> v(n);
    priority_queue<pair<int,int>,vector<pair<int,int>> ,greater<pair<int,int>> > pq;

    for(int i=0;i<m;++i) pq.push({1,i});
    for(int i=0;i<n;++i) cin >> v[i];
    for(int i=0;i<n;++i) {
        int a; cin >> a;
        mx[a] = max(mx[a], v[i]);
        pq.push({mx[a], a});
        
        while(mx[pq.top().second] > pq.top().first) pq.pop();
        cout << pq.top().first << " "; 
    }
}