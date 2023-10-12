
#define f(x) mData[(mFront+x+mCap)%mCap]
#include <map>
using namespace std;
template <typename T>
vector<pair<T,size_t>> CP::queue<T>::count_multi(vector<T> &k) const {

    vector<pair<T,size_t>> ans;
    map<T, int> mp;

    for(int i=0;i<mSize;++i) if(mp.find(f(i)) == mp.end()) mp[f(i)] = 1; else mp[f(i)]++;
    for(auto it : k) {
        if(mp.find(it) == mp.end()) ans.push_back({it,0});
        else ans.push_back({it,mp[it]});
    }
    
    return ans;
}
