#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>
#include <stack>

using namespace std;

int eval_postfix(vector<pair<int,int> > v) {
  //WRITE YOUR CODE HERE
  //DON"T FORGET TO RETURN THE RESULT
  stack<int> a;
  stack<int> b;

  for(auto it : v) {
    if(it.first == 0) a.push(it.second);
    if(it.first == 1) b.push(it.second);

    if(a.size()) {
      int op = a.top(); a.pop();
      int x = b.top(); b.pop();
      int y = b.top(); b.pop();

      if(op == 0) b.push(y+x);
      if(op == 1) b.push(y-x);
      if(op == 2) b.push(y*x);
      if(op == 3) b.push(y/x);
    }
  }




  return b.top();
}

#endif
