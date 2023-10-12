#ifndef __STUDENT_H_
#define __STUDENT_H_

using std::max;

template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const {
  
  int s = mSize;
  int o = other.size();

  if(!s and o) return 1;
  if(s and o and mData[0] < other[0]) return 1;

  if(s and o and mData[0] == other[0])
  for(int i=1;i<max(s, o);++i) {
    if(i<s and i<o and mData[i] == other[i]) continue;
    if(i<s and i<o and mData[i] < other[i]) return 1;
    if(i<s and i<o and mData[i] > other[i]) return 0;

    if(i==s and i<o) return 1; 
    if(i<s and i==o) return 0;
  }

  return 0;
}

#endif
