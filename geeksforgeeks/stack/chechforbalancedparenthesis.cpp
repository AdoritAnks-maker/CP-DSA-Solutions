#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isBalanced(string &s)
    {
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '[' || s[i] == '{' || s[i] == '(')
            {
                st.push(s[i]);
                continue;   
            }

            if (st.empty()) return false; 

            if ((s[i] == ']' && st.top() != '[') ||
                (s[i] == '}' && st.top() != '{') ||
                (s[i] == ')' && st.top() != '('))
            {
                return false;
            }

            st.pop();   
        }
        return st.empty();
    }
};