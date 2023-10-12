#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int cnt[1000009];
bool vst[1000009];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        int a;
        cin >> a;
        cnt[a]++;
        if (!vst[a])
        {
            vst[a] = 1;
            v.push_back(a);
        }
    }

    while (m--)
    {
        int a;
        cin >> a;
        bool found = 0;
        for (auto it : v)
        {
            if(a-it < 0 or a-it>1000000) continue;

            if (it * 2 == a and cnt[a - it] >= 2) { found = 1; break; }
            else if (it * 2 != a and cnt[a - it] >= 1) { found = 1; break; }
            
        }
        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}