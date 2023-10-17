#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n,k,cnt=0,node=1;
    cin >> n >> k; long long kk = k;
    if(k==1) {cout << n-1; return 0;}
    while(node < n) {
        node+=k,cnt++, k*=kk;
       
    }
    cout << cnt;
}