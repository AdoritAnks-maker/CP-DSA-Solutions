#include <bits/stdC++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string s(n, ' ');
        cin >> s;
        stack<char> st;
        for (auto x : s)
        {
            if (!st.empty() && st.top() == x)
            {
                st.pop();
            }
            else
            {
                st.push(x);
            }
        }
        if (st.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}