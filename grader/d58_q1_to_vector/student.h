#ifndef __STUDENT_H_
#define __STUDENT_H_

#define f(x) mData[(mFront + x) % mCap]
template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const
{
  std::vector<T> res;
  int id = 0;
  while (k-- and mSize)
    res.push_back(f(id++));

  return res;
}

template <typename T>
CP::queue<T>::queue(iterator from, iterator to)
{
  mCap = to - from;
  mSize = 0;
  mFront = 0;
  mData = new T[mCap]();

  for (; from != to; from++)
    push(*from);
}

#endif
