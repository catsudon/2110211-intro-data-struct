#ifndef __STUDENT_H_
#define __STUDENT_H_
#include<bits/stdc++.h>
using namespace std;

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  sort(data.begin(), data.end());
  T *temp = new T[data.size()+mSize]; int p=0, c=0;
  for(int i=0;i<mSize;++i) {
    if(data[p].first == i) temp[c++]=data[p++].second;
    temp[c++]=mData[i];
  }
  while(p < data.size()) temp[c++]=data[p++].second;
  delete[]mData;
  mData = temp;
  mSize+=data.size();
  mCap+=data.size();
}
#endif
