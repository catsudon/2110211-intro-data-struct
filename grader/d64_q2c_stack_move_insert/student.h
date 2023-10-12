#ifndef __STUDENT_H__
#define __STUDENT_H__

#include<bits/stdc++.h>

template <typename T>
void CP::stack<T>::moveInsert(int k,CP::stack<T> &s2, int m) { // k = pos , m = size
  //your code here
  std::stack<T> st;
  int mm = m;
  while(s2.size() and mm) {
    mm--;
    st.push(s2.top());
    s2.pop();
  }

  std::vector<T> v;
  while(st.size()) {
    v.push_back(st.top());
    st.pop();
  }

  T *temp = new T[mSize+v.size()];
  int c=0;
  if(k > mSize) // put the new elem on the start
  {
    // cerr << "\nCASE1\n";
    for(auto it:v) temp[c++]=it;
    for(int i=0;i<mSize;++i) temp[c++]=mData[i]; 
  }
  else
  {
    // cerr << "\nCASE2\n" << v.size() << "\n";
    // for(int i=0;i<mSize-k;++i) cerr << mData[i] << " "; cerr << " / ";
    // for(auto it:v) cerr << it << " "; cerr << " / ";
    // for(int i=mSize-k;i<mSize;++i) cerr << mData[i] << " "; cerr << " / \n";


    for(int i=0;i<mSize-k;++i) temp[c++]=mData[i];
    for(auto it:v) temp[c++]=it;
    for(int i=mSize-k;i<mSize;++i) temp[c++]=mData[i]; 
  }
  delete[]mData;
  mData = temp;
  mSize += v.size();
  mCap += v.size();


}
#endif
