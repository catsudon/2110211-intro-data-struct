#include<bits/stdc++.h>
using namespace std;

namespace KUY {
    template <typename T1, typename T2>
    class pair {
        public:
            T1 first;
            T2 second;  

        pair() : first(), second() {}

        pair(const T1 &a, const T2 &b) : first(a), second(b) {}

        bool operator==(const pair<T1,T2> &other) {
            return (first == other.first and second == other.second);
        }
        bool operator<(const pair<T1,T2> &other) {
            return (first < other.first or (first == other.first and second < other.second));
        }
        
    };

}


int main() {
    KUY::pair<int, string> k = {1,"omg"};
    vector<KUY::pair<int, string> > v(10, {69,"wtf"});
    for(auto it: v) {
        cout << it.first << " " << it.second << endl;
    }

}