#ifndef __STUDENT_H__
#define __STUDENT_H__

#include "priority_queue.h"
#include <bits/stdc++.h>
using namespace std;
template <typename T, typename Comp>
T CP::priority_queue<T, Comp>::get_kth(size_t k) const
{
  vector<T> v;
  for(int i = 0; i < min(int(mSize), 7); ++i) {
    v.push_back(mData[i]);
  }
  sort(v.begin(), v.end(), not_fn(mLess));
  // write your code here
  // can include anything

 
  return v[k-1];
}

#endif
