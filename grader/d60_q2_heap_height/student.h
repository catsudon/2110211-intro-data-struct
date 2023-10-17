#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>

template <typename T, typename Comp>
int CP::priority_queue<T, Comp>::height() const
{
    if(mSize == 0 ) return -1;
    int h = 0, node = 1, leaf_count = 2;
    while(node < mSize) {
      node += leaf_count;
      h++;
      leaf_count*=2;
    }

    return h;
}

#endif
