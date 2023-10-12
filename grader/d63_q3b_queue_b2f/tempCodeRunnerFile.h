#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::back_to_front() {
  //write your code here
  if (mFront <=(mFront + mSize - 1) % mCap)
  {
    if(mfront==0){
      mCap=mSize;
      mFront=mSize-1;
    }
    else {
      mData[mFront-1]=mData[mFront+mSize-1];
      mFront--;
    }

  }
  else
  {
    mData[mFront-1]=mData[(mFront + mSize - 1) % mCap];
    mFront-=1;
  }
  
}

#endif
