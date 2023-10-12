#include <iostream>
#include <vector>
#include <stack>
using namespace std;
void stack_concat(stack<int> &s1, stack<int> &s2)
{
    // write your code only in this function

    stack<int> ss1, ss2;
    while(s2.size()) {
        ss2.push(s2.top());
        s2.pop();
    }
    while(s1.size()) {
        ss1.push(s1.top());
        s1.pop();
    }
    while(ss2.size()) {
        s1.push(ss2.top());
        ss2.pop();
    }
    while(ss1.size()) {
        s1.push(ss1.top());
        ss1.pop();
    }

}
int main()
{
    // read input
    int n, m;
    int c;
    cin >> n >> m;
    stack<int> s1, s2;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        s1.push(c);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> c;
        s2.push(c);
    }
    // call the function
    stack_concat(s1, s2);
    // display content of the stack
    cout << "S1 has " << s1.size() << endl;
    while (!s1.empty())
    {
        cout << s1.top() << " ";
        s1.pop();
    }
    cout << endl;
    // display content of the stack
    cout << "S2 has " << s2.size() << endl;
    while (!s2.empty())
    {
        cout << s2.top() << " ";
        s2.pop();
    }
    cout << endl;
}