#ifndef __STUDENT_H_
#define __STUDENT_H_
#define f(x) mData[(x+mFront)%mCap]

template <typename T>
bool CP::queue<T>::operator==(const CP::queue<T> &other) const {
  if(mSize!=other.size()) return 0;
  
  for(int i=0;i<mSize;++i)
    if(f(i) != other.mData[(i+other.mFront)%other.mCap]) return 0;
  
  return 1;
}

#endif
