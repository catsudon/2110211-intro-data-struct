#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, v;
    cin >> n >> k >> v;
    vector<pair<int, bool>> ri;
    for (int i = 0; i < n; ++i)
    {
        if (i == k)
            ri.push_back({v, true});
        int a;
        cin >> a;
        ri.push_back({a, true});
    }
    n++;

    bool firsttime = 1;
    int focus = v;
    int l = k;
    int r = k;
    while (l >= 0 and r < n and ri[l].first == ri[r].first)
    {
        int countL = 0, countR = 0;
        while (r + 1 < n and ri[r + 1].first == focus)
            r++, countR++;
        while (l - 1 >= 0 and ri[l - 1].first == focus)
            l--, countL++;

        int b = 1;
        if (firsttime)
            b = 2;
        if (countL + countR < b)
        {
            r -= countR;
            l += countL;
            cerr << " gu break kuy \n\n"
                 << countL << " ;" << countR << endl;
            break;
        }
        else
        {

            focus = ri[r + 1].first;
            l--;
            r++;
        }
        cerr << " :  " << firsttime << " " << l << " " << r << "     ; " << countL << " " << countR << endl;
        firsttime = 0;
    }

    cerr << endl
         << "____\n"
         << l << " " << r << endl;

    if (r - l > 1)
        for (int i = l + 1; i <= r - 1; ++i)
            ri[i].second = false;
    for (int i = 0; i < ri.size(); ++i)
        if (ri[i].second)
            cout << ri[i].first << " ";
}