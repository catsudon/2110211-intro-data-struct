#ifndef __STUDENT_H_
#define __STUDENT_H_
#pragma GCC optimize("O3")
template <typename T>
void CP::vector<T>::mirror()
{
    resize(mSize * 2);
    for (int i = 0; i < mSize / 2; ++i) *(mData + mSize - 1 - i) = *(mData + i);
}

#endif
