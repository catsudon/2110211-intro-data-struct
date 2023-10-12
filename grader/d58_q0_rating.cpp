#include<bits/stdc++.h>
#define f first
#define s second
using namespace std;

map<string,pair<int,int> > a; // subject -> < sum, cnt >
map<string,pair<int,int> > b; // teacher -> < sum, cnt >

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    while(n--) {
        string x,y;
        int r;
        cin >> x >> y >> r;

        a[x].f +=r, a[x].s++;
        b[y].f +=r, b[y].s++;
    }

    cout << std::fixed << std::setprecision(2);
    for(auto it:a) {
        cout << it.f << " " << double(it.s.f)/it.s.s << "\n";
    }

    for(auto it:b) {
        cout << it.f << " " << double(it.s.f)/it.s.s << "\n";
    }
}