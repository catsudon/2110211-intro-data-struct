#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <bits/stdc++.h>

template <class T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  vector<int> p;for(auto it:pos)p.push_back(it);
  std::sort(p.begin(), p.end());
  int s=mSize-p.size();
  int t[s],c=0,d=0;
  for(int i=0;i<mSize;++i){
    if(i==p[d]){d++;continue;}
    t[c++]=mData[i];
  }
  resize(s);
  for(int i=0;i<s;++i)mData[i]=t[i];
  
}

#endif
