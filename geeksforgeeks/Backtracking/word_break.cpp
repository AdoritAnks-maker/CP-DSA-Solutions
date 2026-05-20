#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool solve(string &s, unordered_set<string> &st, int start, int maxLen)
    {
        if (start == s.size())
            return true;

        for (int len = 1; len <= maxLen && start + len <= s.size(); len++)
        {
            string temp = s.substr(start, len);

            if (st.find(temp) != st.end())
            {
                if (solve(s, st, start + len, maxLen))
                    return true;
            }
        }
        return false;
    }

    bool wordBreak(string s, vector<string> &wordDict)
    {
        unordered_set<string> st(wordDict.begin(), wordDict.end());

        int maxLen = 0;
        for (auto &word : wordDict)
            maxLen = max(maxLen, (int)word.size());

        return solve(s, st, 0, maxLen);
    }
};

int main()
{
    Solution sol;
    string s;
    cin >> s;
    int n;
    cin >> n;

    vector<string> dict(n);
    for (int i = 0; i < n; i++)
    {
        cin >> dict[i];
    }
    bool ok = sol.wordBreak(s , dict);
    cout << ok << endl ;
}