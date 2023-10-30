#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>

template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::find(T k) const {
  //your code here
  for(int i=0;i<mSize;++i) if(mData[i]==k) return 1;
  return 0;
}

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::find_level(T k) const {
  //your code here
  for(int i=mSize-1;i>=0;--i) if(mData[i]==k) {
    int temp = 0;
    int ans = 0;
    while(temp < i) temp*=2,temp+=2, ans++;
    return ans;
  }
  return -1;
}

#endif

