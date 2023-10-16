#define f(x) mData[(mFront+x)%mCap]
template <typename T>
T CP::queue<T>::operator[](int idx) {
  return idx<0?f(mSize+idx):f(idx);
}

