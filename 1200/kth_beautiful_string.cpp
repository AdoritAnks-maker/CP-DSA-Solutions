#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);

void permute(string s, string op, int &count, int k, string &ans)
{
    if (!ans.empty())
        return; // stop early

    if (s.size() == 0)
    {
        count++;
        if (count == k)
        {
            ans = op;
        }
        return;
    }

    for (int i = 0; i < s.size(); i++)
    {
        string op1 = op;
        string s1 = s;

        op1.push_back(s1[i]);
        s1.erase(s1.begin() + i);

        permute(s1, op1, count, k, ans);
    }
}

void solve()
{
    int n, k;
    cin >> n >> k;
    string s = "";
    for (int i = 0; i < n - 2; i++)
    {
        s += 'a';
    }
    for (int i = 0; i < 2; i++)
    {
        s += 'b';
    }
    int count = 1;
    while (count < k)
    {
        next_permutation(s.begin(), s.end());
        count++;
    }
    cout << s << endl;
}

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
}