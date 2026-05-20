#include <bits/stdc++.h>
using namespace std;

void solve(int n, vector<int> op, vector<int> &res, int start)
{
    if (n == 0)
    {
        int ans = 0;
        for (int i = 0; i < op.size(); i++)
        {
            ans = ans * 10 + op[i];
        }
        res.push_back(ans);
        return;
    }
    for (int i = start; i <= 9; i++)
    {
        op.push_back(i);
        solve(n - 1, op, res, i + 1);
        op.pop_back();
    }
}

vector<int> digitsnumber(int n)
{
    vector<int> res;
    vector<int> op;
    int start ;
    if (n == 1)
    {
        start = 0;
    }
    else
    {
         start = 1;
    }
    solve(n, op, res, start);
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector<int> ans = digitsnumber(n);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
}