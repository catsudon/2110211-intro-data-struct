#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b)
{
    stack<T> s; 
    int cnt = 0;
    for(int i=0;i<=b;++i) {
        s.push(top());
        pop();
        cnt++;
    }

    while(s.size()) {
        cnt--;
        push(s.top());
        if(cnt >= a) push(s.top());
        s.pop();
    }
}

#endif