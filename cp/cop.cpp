#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestValidParentheses(string s)
    {
        int n = s.size();
        int max_len = 0;
        stack<int> st;
        st.push(-1); // base: index before start of potential valid segment
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
                st.push(i);
            else
            {
                st.pop();
                if (st.empty())
                    st.push(i); // this ')' is invalid, new base for next segment
                else
                    max_len = max(max_len, i - st.top());
            }
        }
        return max_len;
    }
};
