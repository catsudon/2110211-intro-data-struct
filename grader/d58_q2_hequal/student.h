#ifndef __STUDENT_H_
#define __STUDENT_H_

#include<bits/stdc++.h>
using namespace std;

template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::operator==(const CP::priority_queue<T,Comp> &other) const {

  if(other.size() != size()) return 0;
  sort(mData, mData+mSize, mLess);
  sort(other.mData, other.mData+mSize, other.mLess);

  for(int i=0;i<mSize;++i) if(mData[i] != other.mData[i]) return 0;
  return true; // you can change this line
}

#endif
