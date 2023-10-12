#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "vector-sm.h"
#include <algorithm>
#include <iostream>
#include <vector>

template <typename T>
void CP::vector_some_move<T>::insert(int index, std::vector<T> &value)
{

  std::vector<T> a;
  int cnt = 0;
  for (int i = 0; i < mData.size(); ++i)
  {
    for (int j = 0; j < mData[i].size(); ++j)
    {
      if (cnt == index)
        for (auto it : value)
        {
          a.push_back(it);
          cnt++;
        }
      a.push_back(mData[i][j]);
      cnt++;
    }
  }

  if(a.size() == mSize) {
    for(int i=0;i<value.size();++i) a.push_back(value[i]);
  }

  std::vector<T> t(value.size());
  mData.push_back(t);
  mSize = a.size();
  mCap = a.size();

  cnt = 0;
  vector<int> k(mData.size());
  aux = k;
  for (int i = 0; i < mData.size(); ++i)
  {
    for (int j = 0; j < mData[i].size(); ++j)
    {
      // std::cerr << i << " " << j << " " << mData[i][j] << "\n";
      mData[i][j] = a[cnt++];
    }
    aux[i] = cnt;
  }
}
#endif