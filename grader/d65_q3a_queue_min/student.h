#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>
#define f(x) mData[(mFront+x)%mCap]
template <typename T>
template <typename Comp>
T CP::queue<T>::min_element(std::vector<size_t> pos,Comp comp) const {
  //your code here
  std::sort(pos.begin(), pos.end());
  T mn = f(pos[0]);
  for(int i=0;i<pos.size();++i) {
    if(pos[i] >= mSize) continue;
    if(comp(f(pos[i]),mn)) mn = f(pos[i]);
  }
  
  //should return something
  return mn;
}

#endif
