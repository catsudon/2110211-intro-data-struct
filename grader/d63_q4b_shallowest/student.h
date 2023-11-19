#include <algorithm>
#include <iostream>
using namespace std;

template <typename KeyT,
          typename MappedT,
          typename CompareT>
int CP::map_bst<KeyT,MappedT,CompareT>::shallowest_leaf(node* n) {
  if(n == NULL) return -1;
  if(n-> left == NULL and n->right != NULL) return 1+shallowest_leaf(n->right);
  if(n-> left != NULL and n->right == NULL) return 1+shallowest_leaf(n->left);  
  return 1+ min(shallowest_leaf(n->left), shallowest_leaf(n->right));
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
int CP::map_bst<KeyT,MappedT,CompareT>::shallowest_leaf() {
  //write your code here
  if(mSize == 0) return -1;
  return shallowest_leaf(mRoot);
}
