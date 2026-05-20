#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void solve(string s, string op, vector<string> &ans)
    {
        if (s.size() == 0)
        {
            ans.push_back(op);
            return;
        }
        string op1 = op;
        string op2 = op;
        op1.push_back(s[0]);
        op2.push_back(toupper(s[0]));
        s.erase(s.begin());
        solve(s, op1, ans);
        solve(s, op2, ans);
    }
    vector<string> permute(string s)
    {
        string op = "";
        vector<string> ans;
        solve(s, op, ans);
        return ans;
    }
};

int main()
{
    Solution sol;
    string s = "ab";
    vector<string> result = sol.permute(s);
    for (auto x : result)
    {
        cout << x << " ";
    }
    cout << endl;
}
