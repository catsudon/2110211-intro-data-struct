#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
CP::stack<T>::stack(typename std::set<T>::iterator first,typename std::set<T>::iterator last) {
  
  int z=0;
  auto it = first;
  while(first!=last) {
    z++; first++;
  }

  mData = new T[z]();
  mSize = z;
  mCap = z;

  int a = z;
  last--;
  for(int i=0;i<a;++i){
    mData[i] = *last;
    last--;
  }


}

#endif
