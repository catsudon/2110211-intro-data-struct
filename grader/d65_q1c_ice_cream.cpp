#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
typedef long long ll;

ll qs[100'009];
priority_queue<pair<int, int>> pq;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, m, growth; cin >> n >> m >> growth;

    for (int i = 0; i < n; ++i) {
        int a, b; cin >> a >> b;
        pq.push({-a, b});
    }

    for (int i = 1; i <= 100001; ++i) {

        if (pq.size() and -pq.top().f == i-1) {
            growth = pq.top().s; pq.pop();
        }

        qs[i] = qs[i - 1] + growth;
    }


    while (m--) {
        int P, x; cin >> P >> x;
        x++; // because we shifted the index to do prefixsum
        
        // รอด
        if (P <= qs[x]) {
            auto it = lower_bound(qs + 1, qs + x + 1, P);
            cout << it-qs-1 << " ";
        }

        // โดนหลอก ไอ้ควาย
        else {
            auto it = lower_bound(qs + 1 + x, qs + 1 + 100000, P + qs[x]);
            cout << it-qs-1 << " ";
        }
    }
}