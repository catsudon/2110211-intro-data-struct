template <class T>
bool CP::vector<T>::operator==(const vector<T> &o) const
{
  if (mSize != o.size())
    return 0;
  for (int i = 0; i < mSize; ++i)
    if (mData[i] != o[i])
      return 0;
  return 1;
}