#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "priority_queue.h"
#include <iostream>
using std::swap;

template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixUp(size_t idx) {
    int parent = (idx-1)/4;
    if(parent < 0 or idx == 0) return;
    if(mLess(mData[parent],mData[idx])) {
        swap(mData[idx], mData[parent]);
        fixUp(parent);
    }
}

template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixDown(size_t idx) {
    int child = idx*4;
    int mem = -1, mxchild = INT32_MIN;
    for(int i=1;i<=4;++i) {
        if(child+i >= mSize) break;
        if(mLess(mData[idx], mData[child+i])) {
            if(mLess(mxchild, mData[child+i])) mxchild = mData[child+i], mem = i;
        }
    }
    if(mem != -1) {
        swap(mData[idx], mData[child+mem]);
        fixDown(child+mem);
    }
}

#endif

