#include<bits/stdc++.h>

using namespace std;

int main() {
    int *mData = new int[10]();
    for(int i=0;i<10;++i) mData[i] = i*10;

    int *kuy = mData;
    *kuy = 3;
    cout << mData[0];

}