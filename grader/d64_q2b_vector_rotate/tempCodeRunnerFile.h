#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
  //write your code here
  using namespace std;
  vector<T> v;
  for(auto i=first+k;i<last;++i) {
    v.push_back(i);
  }
  for(auto i=first;i<first+k;++i) v.push_back(i);

  for(int i=0;i<last-first;++i) *(first+i) = v[i]; 
}

#endif
