#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        stack<int> st;
        for (int i = 0; i < n; i++)
        {
            if (st.empty())
            {
                st.push(s[i]);
            }
            else if (st.top() == s[i])
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }

        cout << st.size() << endl;
    }
    return 0;
}