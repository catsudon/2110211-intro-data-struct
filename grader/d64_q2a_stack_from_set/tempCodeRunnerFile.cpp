
  int n = 3;
  for (int i = 0;i < n;i++) it2++;
  CP::stack<int> st(it1,it2);
  for (int i = 1;i <= n;i++) {
    if (st.empty()) return false;
    std::cout << st.top() << std::endl;
    if (st.top() != i) return false;
    st.pop();