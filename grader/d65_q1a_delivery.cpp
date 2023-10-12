#include<bits/stdc++.h>
#define f first
#define s second
using namespace std;

vector<int> cnt(100'009,-1);
queue<int> d1;
queue<int> d2;
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > goal;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n,m; cin >> n >> m;
    for(int i=0;i<m;++i) {
        int a; cin >> a;
        goal.push({a, i});
    }
    int riru = 0, money = 0;
    while(n--) {
        int cmd; cin >> cmd;
        if(cmd == 1) {
            int a,b; cin >> a >> b;
            if(a == 1) d1.push(b);
            if(a == 2) d2.push(b);
        }
        if(cmd == 2) {
            riru++;
            if(!d1.size() or (d1.size() and d2.size() and d1.front() > d2.front())) {
                money += d2.front();
                d2.pop();
            }
            else if(!d2.size() or (d1.size() and d2.size() and d1.front() <= d2.front())) {
                money += d1.front();
                d1.pop();
            }

        }
        while(goal.size()) {
            int g = goal.top().f;
            int idx = goal.top().s;
            if(money >= g) {
                cnt[idx] = riru;
                goal.pop();
            }
            else break;
        }
    }
    for(int i=0;i<m;++i) cout << cnt[i] << " ";

}