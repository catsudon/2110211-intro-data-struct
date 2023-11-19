#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "map_bst.h"
using namespace std;

template <typename KeyT, typename MappedT, typename CompareT>
size_t CP::map_bst<KeyT, MappedT, CompareT>::process(node *n)
{
  if(n == NULL) return 0;
  return 1+process(n->left)+process(n->right);
}

template <typename KeyT, typename MappedT, typename CompareT>
std::pair<KeyT, MappedT> CP::map_bst<KeyT, MappedT, CompareT>::subtree(map_bst<KeyT, MappedT, CompareT> &left, map_bst<KeyT, MappedT, CompareT> &right)
{
  // write your code here
  left.clear();
  right.clear();
  left.mRoot = mRoot->left;
  right.mRoot = mRoot->right;

  left.mSize = process(mRoot->left);
  right.mSize = process(mRoot->right);

  mRoot->left = NULL;
  mRoot->right = NULL;
  mSize = 1;
  return mRoot->data;
}

#endif
