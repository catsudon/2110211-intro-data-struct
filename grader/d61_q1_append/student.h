#include "stack.h"
#include "queue.h"

#define f(x) mData[(mFront+x)%mCap]

namespace CP {
    template<typename T>
    void stack<T>::appendStack(stack<T> s) {
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
