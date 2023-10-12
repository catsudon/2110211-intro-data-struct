#include <iostream>
#include <vector>
#include <map>
#include<algorithm>
using namespace std;
void insert_into_sv(map<int, int> &v, int pos, int value)
{
    // your code here
    vector<pair<int, int>> vv;
    for(auto it : v) {
        vv.push_back(it);
    }
    
    sort(vv.begin(), vv.end());
    reverse(vv.begin(), vv.end());

    map<int,int> mp;
    for(auto it: vv) {
        // if(it.first>=pos) mp[it.first+1] = it.second;
        if(it.first>=pos) mp.insert(mp.begin(), {it.first+1, it.second});
        // else mp[it.first] = it.second;
        else mp.insert(mp.begin(), it);
    }
    mp[pos]= value;
    v=mp;

    
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    map<int, int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        insert_into_sv(v, a, b);
    }
    cout << v.size() << "\n";
    for (auto &x : v)
    {
        cout << x.first << ": " << x.second << "\n";
    }
}