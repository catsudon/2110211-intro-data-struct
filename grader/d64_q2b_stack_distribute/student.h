#ifndef __STUDENT_H__
#define __STUDENT_H__

#include<bits/stdc++.h>

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const {
  int mod = mSize % k;
  int size = mSize / k;
  if(mod != 0) size++;

  int c = mSize;
  std::vector<std::vector<T>> v(k);
  for(int i=0;i<k;++i) {
    if(i==mod and mod!=0) size--;
    for(int j=0;j<size;++j)  v[i].push_back(mData[--c]);
  }
  
  return v;
}
#endif
