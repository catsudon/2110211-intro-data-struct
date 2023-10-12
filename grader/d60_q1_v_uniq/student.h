#ifndef __STUDENT_H_
#define __STUDENT_H_

//you can include any other file here
//you are allow to use any data structure
#include<bits/stdc++.h>

template <typename T>
void CP::vector<T>::uniq() {
  using namespace std;
  vector<T> a;
  map<T,bool> mp;
  for(int i=0;i<mSize;++i) {
    if(mp.find(mData[i]) != mp.end()) continue;
    mp[mData[i]] = 1;
    a.push_back(mData[i]);
  }

  T *arr = new T[a.size()]();
  for(int i=0;i<a.size();++i) arr[i] = a[i];
  delete [] mData;
  mData = arr;
  mSize = a.size();
  mCap = a.size();
}

#endif
