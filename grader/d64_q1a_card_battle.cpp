#include<bits/stdc++.h>
using namespace std;

set<int> card;
int cardcnt[1'000'009];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n,m; cin >> n >> m;
    for(int i=0;i<n;++i) {
        int a; cin >> a;
        cardcnt[a]++;
        card.insert(a);
    }

    int match = 1;
    while(m--) {
        int a; cin >> a; vector<int> op;
        for(int i=0;i<a;++i) {
            int b; cin >> b;
            op.push_back(b);
        }
        for(auto opcard : op) {
            auto it = card.upper_bound(opcard);

            if(it == card.end()) { match--; break;}

            cardcnt[*it]--;
            if(!cardcnt[*it]) card.erase(it);
        }
        match++;
    }

    cout << match;
}