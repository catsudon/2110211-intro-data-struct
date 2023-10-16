#include "stack.h"
#include "queue.h"

#define f(x) mData[(mFront+x)%mCap]
#include<bits/stdc++.h>

namespace CP {
    template<typename T>
    void stack<T>::appendStack(stack<T> s) {
        T* temp = new T[mSize+s.size()];
        std::stack<T> st;
        whil(s.size()) {
            st.push(s.top()); s.pop();
        }
        int id = 0;
        while(st.size()) {temp[id++] = st.top(); st.pop();} 
        for(int i=0;i<mSize;++i) temp[id++] = mData[i];

        delete mData;
        mData = temp;
    }

    template<typename T>
    void stack<T>::appendQueue(queue<T> q) {
    }

    template<typename T>
    void queue<T>::appendStack(stack<T> s) {
    }

    template<typename T>
    void queue<T>::appendQueue(queue<T> q) {
    }
}
