#ifndef __STUDENT_H
#define __STUDENT_H

#include "priority_queue.h"

template <typename T, typename Comp>
bool CP::priority_queue<T, Comp>::check() {
  for(int i=1;i<mSize;++i) {
    if( mLess(mData[(i-1)/2], mData[i]) ) return false;
  }
  return true;
}

#endif