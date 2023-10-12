#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "vector-sm.h"
#include <bits/stdc++.h>
using namespace std;
template <typename T>
void CP::vector_some_move<T>::insert(int index, std::vector<T> &value)
{
  if(index >= mSize) {
      aux.push_back(mSize+value.size());
      mData.push_back(value);  
  }
  else {
      int midx = upper_bound(aux.begin(), aux.end(), index) - aux.begin();
      int cnt = aux[max(0,midx-1)];
      if(midx==0) cnt=0;

      mData[midx].insert(mData[midx].begin()+index-cnt, value.begin(), value.end());
      for(int i=midx;i<aux.size();++i) aux[i]+=value.size();
  }
  mSize+=value.size();
}
#endif