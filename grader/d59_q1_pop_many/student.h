#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  //write your code here
  while(mSize and K) {
    K--; pop();
  }
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  std::stack<T> a,b;
  while(mSize and K) {
    K--;
    a.push(top());
    pop();
  }
  while(a.size()) {
    b.push(a.top());
    a.pop();
  }
  return b;
}

#endif
