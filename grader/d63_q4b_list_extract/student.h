#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T &value, iterator a, iterator b, CP::list<T> &output)
{
  // write your code here
  
  while (a != b)
  {
    iterator it = a.ptr->next;
    if (a.ptr->data == value)
    {

      a.ptr->next->prev = a.ptr->prev;
      a.ptr->prev->next = a.ptr->next;

      a.ptr->next = output.mHeader->next;
      a.ptr->prev = output.mHeader;

      output.mHeader->next->prev = a.ptr;
      output.mHeader->next = a.ptr;

      output.mSize++;
      mSize--;
      
    }
    a = it;
  }
}

#endif
