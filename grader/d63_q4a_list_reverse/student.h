#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
template <typename T>
typename CP::list<T>::iterator CP::list<T>::reverse(iterator a, iterator b) {
  //write your code here
  vector<T> val;
  iterator z = a;
  int cnt=0;
  while (a!=b)
  {
    val.push_back(*a);
    a++;
    cnt++;
  }
  a = z;
  while(a!=b) {
    *a=val[--cnt];
    a++;
  }
  return z;
  
}

#endif
