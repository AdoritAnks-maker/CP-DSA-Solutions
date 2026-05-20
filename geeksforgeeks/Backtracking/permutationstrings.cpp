#include <bits/stdc++.h>
using namespace std;

void solve(string &s, int start, vector<string> &res)
{
    if (start == s.size() - 1)
    {
        res.push_back(s);
        return;
    }
    map<char, int> mpp;
    for (int i = start; i < s.size(); i++)
    {
        if (mpp.find(s[i]) == mpp.end())
        {
            mpp[s[i]]++;
            swap(s[start], s[i]);
            solve(s, start + 1, res);
            swap(s[start], s[i]); /// backtracking step for the 
        }
    }
}

vector<string> get(string s)
{
    vector<string> res;
    int start = 0;
    solve(s, start, res);
    return res;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    vector<string> ans = get(s);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
}