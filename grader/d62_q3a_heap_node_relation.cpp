#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n,m; cin >> n >> m;
    while(m--) {
        int a,b; cin >> a >> b;
        if(a==b) {
            cout << "a and b are the same node\n";
            continue;
        } 
        int aa = a , bb = b;
        while(bb > a) bb = (bb-1)/2;
        
        if(bb == a) {
            cout << "a is an ancestor of b\n";
            continue;
        }

        while(aa > b) aa = (aa-1)/2;
        if(aa == b) {
            cout << "b is an ancestor of a\n";
            continue;
        }

        cout << "a and b are not related\n";

    }
}