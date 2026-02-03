#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int prec(char c)
    {
        if (c == '^')
            return 3;
        else if (c == '*' || c == '/')
            return 2;
        else if (c == '+' || c == '-')
            return 1;
        return -1;
    }

    bool isrightassociative(char c)
    {
        return c == '^';
    }

    string infixtopostfix(string &s)
    {
        stack<char> st;
        string res = "";

        for (int i = 0; i < s.size(); i++)
        {
            char c = s[i];

            // Operand
            if (isalnum(c))
            {
                res += c;
                continue;
            }

            // Opening bracket
            if (c == '(')
            {
                st.push(c);
            }
            // Closing bracket
            else if (c == ')')
            {
                while (!st.empty() && st.top() != '(')
                {
                    res += st.top();
                    st.pop();
                }
                st.pop(); // pop '('
            }
            // Operator
            else
            {
                while (!st.empty() && st.top() != '(' &&
                       (prec(st.top()) > prec(c) ||
                        (prec(st.top()) == prec(c) && !isrightassociative(c))))
                {
                    res += st.top();
                    st.pop();
                }
                st.push(c);
            }
        }

        // Pop remaining operators
        while (!st.empty())
        {
            res += st.top();
            st.pop();
        }

        return res;
    }
};

int main()
{
    Solution sol;

    string s;
    cout << "Enter infix expression: ";
    cin >> s;

    string ans = sol.infixtopostfix(s);
    cout << "Postfix expression: " << ans << endl;

    return 0;
}
