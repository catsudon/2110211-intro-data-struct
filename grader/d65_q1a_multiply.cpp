#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void member_multiply(vector<int> &v,
                     vector<pair<vector<int>::iterator, int>> &multiply)
{
    vector<pair<int, int>> m;
    for (auto it : multiply)
    {
        m.push_back({*(it.first), it.second});
    }
    sort(m.begin(), m.end());
    vector<int> n;

    for (int i = 0; i < v.size(); ++i)
    {
        auto it = lower_bound(m.begin(), m.end(), pair<int, int>({v[i], 0}));
        if (it == m.end())
        {
        }
        else if ((*it).first == v[i])
        {
            for (int j = 0; j < (*it).second; ++j)
                n.push_back(v[i]);
        }
        n.push_back(v[i]);
    }
    v = n;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    vector<pair<vector<int>::iterator, int>> multiply(m);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        multiply[i].first = v.begin() + a;
        multiply[i].second = b;
    }
    member_multiply(v, multiply);
    cout << "======= result ========" << endl;
    cout << v.size() << endl;
    for (auto &x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}