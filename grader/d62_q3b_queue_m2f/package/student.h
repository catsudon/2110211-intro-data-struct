#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

#define f(x) mData[(mFront+x+mCap)%mCap]

template <typename T>
void CP::queue<T>::move_to_front(size_t pos) {
    //your code here
    using namespace std;
    swap(f(pos), f(0));
    for(int i=pos;i>1;--i) swap(f(i), f(i-1));    

}

#endif
