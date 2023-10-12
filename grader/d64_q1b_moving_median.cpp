#include<bits/stdc++.h>
using namespace std;

int a[1'000'069];
vector<pair<int,int> > window;
set<pair<int,int>> lower;
set<pair<int,int>> upper; 

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n,w; cin >> n >> w;
    
    for(int i=0;i<n;++i) cin >> a[i];
    for(int i=0;i<w+1;++i) window.push_back({a[i], i});
    sort(window.begin(), window.end());

    for(int i=0;i<w/2+1;++i) lower.insert(window[i]);
    for(int i=w/2+1;i<=w;++i) upper.insert(window[i]);
    cout << (*lower.rbegin()).first << " ";
    

    for(int i=w+1;i<n;++i) {
        pair<int,int> old = {a[i-w-1],i-w-1};
        if(lower.find(old) != lower.end()) lower.erase(old);
        else upper.erase(old);

        if(a[i] > (*lower.rbegin()).first) upper.insert({a[i], i});
        else lower.insert({a[i], i});

        if(upper.size() >= lower.size()) {lower.insert(*upper.begin()); upper.erase(*upper.begin());}
        else if(lower.size() - upper.size() > 1) {upper.insert(*lower.rbegin()); lower.erase(*lower.rbegin());}

        cout << (*lower.rbegin()).first << " ";
    }


}