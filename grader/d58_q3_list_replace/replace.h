void replace(const T& x, list<T>& y) {
  //write your code here
  auto a = begin();
  while (a!=end()) {
    if(*a == x) {
      a = erase(a);
      for(auto it:y) {
        insert(a,it);
      }
      continue;
    }
    a++;
  }

}
