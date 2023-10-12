
#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_back(size_t pos) {
  int mc = mCap;
  int op = (mFront+pos)%mc;
  int ed = (mFront+mSize)%mc;

  int cnt = pos;


  if(mFront == ed) {
    using std::swap;
    ed = (ed-1+mc)%mc;
    swap(mData[op], mData[ed]);

    ed = op;
    op++; op%=mc;

    cnt = mSize - pos - 2;
    for(int i=0;i<cnt;++i) {
      swap(mData[op], mData[ed]);
      op++; ed++;
      if(op == mc) op = 0;
      if(ed == mc) ed = 0;
    }
    return ;
  }

  using std::swap;
  swap(mData[op], mData[ed]);

  ed = op;
  op = (op-1+mc)%mc;
  for(int i=0;i<cnt;++i) {
    swap(mData[op--], mData[ed--]);
    if(i==0) op=(op+mc)%mc, ed=(ed+mc)%mc;
    if(op == -1) op = mc-1;
    if(ed == -1) ed = mc-1;
  }

  mFront = (mFront+1)%mc;


}