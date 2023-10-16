#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include <algorithm>
using namespace std;

template <typename T>
std::vector<std::vector<T>>  CP::stack<T>::split_stack(int k) const {
  vector<vector<T>> ans;
  for(int i=0;i<k;++i) {
    vector<T> temp;
    ans.push_back(temp);
  }

  for(int i=0;i<k;++i) {
    int kk = k-i;
    for(int x=i;x<mSize;x+=k) {
      ans[i].push_back(mData[mSize-1-x]);
    }
    reverse(ans[i].begin(), ans[i].end());
  }

  return ans;
}

#endif

