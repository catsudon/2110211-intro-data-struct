#include <iostream>
#include <vector>
#include "queue.h"
#include "student.h"
#include <stdio.h>

using namespace std;

int main() {
  CP::queue<int> q;
  char c;
  cin >> c;
  while (c != 'q') {
    if (c == 'u') {
      // add data
      int v;
      scanf("%d", &v);
      q.push(v);
    } else if (c == 'o') {
      q.pop();
    } else if (c == 'p') {
      q.print();
    } else if (c == 'm') {
      int p;
      cin >> p;
      q.move_to_back(p);
    }
    for(int i=0;i<q.mCap;++i) cerr << q.mData[i] << " " ;
    cerr << endl;
    cerr << "front:" << q.mFront << "  size:" << q.mSize << endl;
    cin >> c;
  }
  return 0;
}
