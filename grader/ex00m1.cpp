#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    priority_queue<pair<int,int>, vector<pair<int,int>> , greater<pair<int,int>> > pq;
    int n,k; cin >> n >> k;
    for(int i=0;i<n;++i) {
        int a; cin >> a;
        pq.push({0,a});
    }
    while(k--){
        int f = pq.top().first;
        int s = pq.top().second;
        pq.pop();
        cout << f << "\n";
        pq.push({f+s,s});
    }
}