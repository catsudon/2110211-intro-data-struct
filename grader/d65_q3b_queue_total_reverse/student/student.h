#ifndef _STUDENT_H_INCLUDED
#define _STUDENT_H_INCLUDED
#include "queue.h"
#include<bits/stdc++.h>
using namespace std;
#define f(x) mData[(x+mFront)%mCap]

template <typename T>
void CP::queue<T>::reverse() {
  aux=!aux;
}

template <typename T>
const T& CP::queue<T>::front() const {

  if(!aux)return f(0);
  return f(mSize-1);
}

template <typename T>
const T& CP::queue<T>::back() const {
  if(aux)return f(0);
  return f(mSize-1);
}

template <typename T>
void CP::queue<T>::push(const T& element) {
  // You MAY need to edit this function
  ensureCapacity(mSize + 1);
  if(!aux) mData[(mFront + mSize) % mCap] = element;
  else {
    mFront--;
    mFront+=mCap;
    mFront%=mCap;
    f(0) = element;
  }
  mSize++;

  // for(int i=0;i<mCap;++i) cerr << mData[i]<<" "; cerr<<endl;
}
 
template <typename T>
void CP::queue<T>::pop() {
  if(!aux)mFront = (mFront + 1) % mCap;
  mSize--;
}

#endif