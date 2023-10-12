#include<bits/stdc++.h>
#define f first
#define s second
using namespace std;

int user, item, price;
int cnt[1'000'009];
priority_queue<pair<int,int> > bid_of[1'000'009]; // [item] => {price, user}
map<pair<int,int>, int> bid_price; // [{user, item}] => price // -1 if withdrawed 
vector<int> ans[1'000'009];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n,m,a; cin >> n >> m >> a;
    for(int i=1;i<=n;++i) cin >> cnt[i];
    while(a--) {
        string cmd; cin >> cmd;
        if(cmd == "B") {
            cin >> user >> item >> price;
            bid_price[{user, item}] = price;
        }
        if(cmd == "W") {
            cin >> user >> item;
            bid_price[{user, item}] = -1;
        }
    }

    for(auto it:bid_price) {
        if(it.s == -1) continue;
        bid_of[it.f.s].push({it.s, it.f.f});
    }

    for(int i=1;i<=n;++i) {
        while(cnt[i] and bid_of[i].size()) {
            ans[bid_of[i].top().s].push_back(i);
            cnt[i]--; bid_of[i].pop();
        }
    }

    for(int i=1;i<=m;++i) {
        if(ans[i].empty()) cout << "NONE\n";
        else {
            for(auto it: ans[i]) cout << it  << " ";
            cout << "\n";
        }
     }
}