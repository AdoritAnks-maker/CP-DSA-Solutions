#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void solve(string s, string op, vector<string> &res)
    {
        if (s.size() == 0)
        {
            res.push_back(op);
            return;
        }
        string op1 = op;
        string op2 = op;
        op1.push_back(' ');
        op1.push_back(s[0]);
        op2.push_back(s[0]);
        s.erase(s.begin());
        solve(s, op1, res);
        solve(s, op2, res);
    }

    vector<string> permutation(string s)
    {
        vector<string> ans;
        string op = "";
        op.push_back(s[0]);
        s.erase(s.begin());
        solve(s, op, ans);
        return ans;
    }
};