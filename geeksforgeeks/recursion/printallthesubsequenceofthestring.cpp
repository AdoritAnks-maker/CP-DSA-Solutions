#include <bits/stdc++.h>
using namespace std;

void solve(string s, string op, vector<string> &res)
{
    if (s.size() == 0)
    {
        res.push_back(op);
        return;
    }
    string op1 = op;
    string op2 = op;
    op1.push_back(s[0]);
    s.erase(s.begin());
    solve(s, op1, res);
    solve(s, op2, res);
}

vector<string> get(string s)
{
    string op = "";
    vector<string> res;
    solve(s, op, res);
    return res;
}

int main()
{
    int n;
    cin >> n;
    string s(n, ' ');
    cin >> s;
    vector<string> res = get(s);
    for (auto x : res)
    {
        cout << x << " ";
    }
    cout << endl;
}