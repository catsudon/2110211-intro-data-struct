#include<bits/stdc++.h>
#include"queue.h"
template<class T>std::vector<CP::queue<T>>CP::queue<T>::split_queue(int k){std::vector<CP::queue<T>>s(k);int i=0;while(size()){s[(i++)%k].push(front());pop();}return s;}
