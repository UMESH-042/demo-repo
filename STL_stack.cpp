#include <bits/stdc++.h>

using namespace std;
// Stack follows LIFO  
int main()
{
    stack<int> s;

    s.push(2);
    s.push(7);
    s.push(1);
    s.push(8);
    s.push(10);
    cout << s.top() << endl;

    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    // if (!s.empty())
    // {
    //     cout << s.top() << endl;
    // }
    // else
    // {
    //     cout << -1 << endl;
    // }
    return 0;
}