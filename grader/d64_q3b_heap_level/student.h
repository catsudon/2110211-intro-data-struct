#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include<bits/stdc++.h>
#include "priority_queue.h"

using namespace std;

template <typename T,typename Comp >
std::vector<T> CP::priority_queue<T,Comp>::at_level(size_t k) const {
  //write your code here
  //can include anything
  std::vector<T> r;
  int lvl_k_first_node = 0;
  int lvl_k_last_node = 0;
  for(int i=1;i<=k;++i) lvl_k_first_node*=2, lvl_k_first_node+=1, lvl_k_last_node*=2, lvl_k_last_node+=2;
  for(int i=lvl_k_first_node;i<=lvl_k_last_node;++i) {
    if(i<mSize) r.push_back(mData[i]);
  }
  sort(r.begin(), r.end(), not_fn(mLess));


  return r;
}

#endif

