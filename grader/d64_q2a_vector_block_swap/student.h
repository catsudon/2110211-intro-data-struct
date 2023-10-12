#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  //write your code here
  if(a<begin() or b<begin()) return false;
  if(a<b and a+m-1 >= b) return false;
  if(b<a and b+m-1 >= a) return false;
  if(a==b or m<=0) return false;
  for(int i=0;i<m;++i) 
  {
    if(a+i >= end()) return 0;
    if(b+i >= end()) return 0;
    std::swap(*(a+i),*(b+i));
  }

  return true;
}

#endif
