#ifndef __STUDENT_H_
#define __STUDENT_H_

#include<bits/stdc++.h>
using namespace std;
// you can modify and use this function
template <typename KeyT,
          typename MappedT,
          typename CompareT>
void CP::map_bst<KeyT,MappedT,CompareT>::my_recur(node* n,size_t level,size_t tmp,std::vector<KeyT> &v) {
  //you MAY need to use this function
  if(n == NULL or level > tmp) return;
  if(level == tmp) v.push_back(n->data.first);
  my_recur(n->right, level+1, tmp, v);
  my_recur(n->left, level+1, tmp, v);
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
std::vector<KeyT> CP::map_bst<KeyT,MappedT,CompareT>::at_level(size_t level) {
  //write your code here
  std::vector<KeyT> v;
  my_recur(mRoot, 0,level, v);
  return v;

}


#endif
