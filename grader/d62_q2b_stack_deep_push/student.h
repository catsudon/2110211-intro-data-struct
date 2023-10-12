#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::deep_push(size_t pos,const T& value) {
  int o = mSize;
  ensureCapacity(mSize+1); // check if we need to expand the array
  mSize+=1;
  while(pos--) {
    mData[o] = mData[o-1];
    o--;
  }
  mData[o]=value;
}

#endif
