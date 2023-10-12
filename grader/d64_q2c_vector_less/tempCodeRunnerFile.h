#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const {
  
  if(!mSize and other.size()) return 1;
  if(mSize and other.size() and a[0] < b[0]) return 1;
  if(mSize and other.size() and a[1] < b[1]) return 1;
  return 0;
}

#endif
