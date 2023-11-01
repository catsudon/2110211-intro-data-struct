#ifndef __STUDENT_H_
#define __STUDENT_H_

#include<bits/stdc++.h>
using namespace std;

template <typename T,typename Comp>
size_t CP::priority_queue<T,Comp>::get_rank(size_t pos) const {
  //write your code here
  int want = mData[pos];
  vector<T> temp(mData, mData+mSize);
  sort(temp.begin(), temp.end(), not_fn(mLess));
  for(int i=0;i<mSize;++i) if(mData[i] == want) return i;
}

#endif
