#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void solve(string &s, int k, string &res, int start)
    {
        if (k == 0 || start == s.size() - 1)
        {
            return;
        }
        char mx_elm = *max_element(s.begin() + start, s.end());
        for (int i = start + 1; i < s.size(); i++)
        {
            if (s[start] < s[i] && s[i] == mx_elm)
            {
                swap(s[start], s[i]);
                if (s.compare(res) > 0)
                {
                    res = s;
                }
                solve(s, k - 1, res, start + 1);
                swap(s[i], s[start]);
            }
        }
        solve(s, k, res, start + 1);
    }
    string findMaximumNum(string &s, int k)
    {
        string res = s;
        int start = 0;
        solve(s, k, res, start);
        return res;
    }
};


int main(){
    Solution sol ;
    string s ;
    cin >> s ;
    int k ;
    cin >> k ;
    string ans = sol.findMaximumNum(s, k);
    cout << ans  << endl ;
}