#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <cassert>
#define f(x) mData[(mFront+x)%mCap]

template <typename T>
void CP::queue<T>::reverse(int a,int b) {
  //your code here
  while(a<b) {
    using std::swap;
    swap(f(a),f(b));
    a++;b--;
  }
}

#endif
