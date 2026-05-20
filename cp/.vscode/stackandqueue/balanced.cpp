#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    stack<char> st;
    for (char c : s)
    {
        if (c == '(')
        {
            st.push(c);
        }
        else
        {
            if (st.empty())
            {
                cout << "Not Balanced" << endl;
            }
            else
            {
                st.pop();
            }
        }
    }
    if (st.empty())
    {
        cout << " balanced" << endl;
    }
    else
    {
        cout << "not balanced" << endl;
    }
}