#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
  //write your code here
  using namespace std;
  int cnt = 0;
  vector<T> v(last-first);
  for(auto i=first+k;i<last;++i) v[cnt++]=(*i);
  
  for(auto i=first;i<first+k;++i) v[cnt++]=(*i);

  for(int i=0;i<last-first;++i) *(first+i) = v[i]; 
}

#endif
