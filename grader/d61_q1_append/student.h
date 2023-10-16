#include "stack.h"
#include "queue.h"

#define f(x) mData[(mFront+x)%mCap]
#include<bits/stdc++.h>
using namespace std;

namespace CP {
    template<typename T>
    void stack<T>::appendStack(stack<T> s) {
        int newSize = mSize+s.size();
        T* temp = new T[newSize];
        std::stack<T> st;
        while(s.size()) {
            st.push(s.top()); s.pop();
        }
        int id = 0;
        while(st.size()) {temp[id++] = st.top(); st.pop();} 
        for(int i=0;i<mSize;++i) temp[id++] = mData[i];

        delete mData;
        mData = temp;
        mSize = newSize;
        mCap = newSize;

    }

    template<typename T>
    void stack<T>::appendQueue(queue<T> q) {
        int newSize = mSize+q.size();
        T* temp = new T[newSize];
        std::stack<T> st;
        while(q.size()) {
            st.push(q.front()); q.pop();
        }
        int id = 0;
        while(st.size()) {temp[id++] = st.top(); st.pop();} 
        for(int i=0;i<mSize;++i) temp[id++] = mData[i];

        delete mData;
        mData = temp;
        mSize = newSize;
        mCap = newSize;
    }

    template<typename T>
    void queue<T>::appendStack(stack<T> s) {
        while(s.size()) {
            push(s.top()); s.pop();
        }
    }

    template<typename T>
    void queue<T>::appendQueue(queue<T> q) {
        while(q.size()) {
            push(q.front());
            q.pop();
        }
    }
}
