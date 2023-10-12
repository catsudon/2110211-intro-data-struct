#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    while(n--) {
        int front,size,cap,last; cin >> front >> size >> cap >> last;
        int cmd,riru; cin >> cmd;
        
        bool ok = 1;

        if(size > cap or front > cap or last > cap or front < 0 or last < 0) ok = 0;
        if((front+size)%cap != last ) ok = 0;

        if(cmd == 1) {
            riru = (last-size+cap)%cap;
            if(front!=riru) ok=0;
        }
        if(cmd == 2) {
            riru = (last-front+cap)%cap;
            if(size!=riru and size!=cap) ok=0;
        }
        if(cmd == 3) {
            if(front <= last) riru = max({cap,last+1,size});
            else riru = size+front-last;
            if(cap!=riru) ok=0;
        }
        if(cmd == 4) {
            riru = (front+size)%cap;
            if(last!=riru) ok=0;
        }
        cout << (ok?"OK":"WRONG");
        if(cmd>0 and !ok) cout << " " << riru;
        cout << "\n";
    }

}