#include <bits/stdc++.h>
using namespace std;

void solve(string ip, string op, set<string> &res)
{
    if (ip.size() == 0)
    {
        res.insert(op);
        return;
    }
    for (int i = 0; i < ip.size(); i++)
    {
        string s1 = ip;
        string op1 = op;
        op1.push_back(s1[i]);
        s1.erase(s1.begin() + i);
        solve(s1, op1, res);
    }
}

vector<string> get(string s)
{
    string op = "";
    set<string> ans;
    solve(s, op, ans);
    vector<string> p(ans.begin(), ans.end());
    return p;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    vector<string> ss = get(s);
    cout << ss.size() << endl;
    for (auto x : ss)
    {
        cout << x << endl;
    }
    return 0;
}