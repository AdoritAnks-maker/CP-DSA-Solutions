#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;

        map<char, int> mpp;
        int i = 0, j = 0;
        int mn_len = INT_MAX;

        while (j < s.size())
        {
            mpp[s[j]]++;

            while (mpp.size() == 3)
            {
                mn_len = min(mn_len, j - i + 1);

                mpp[s[i]]--;
                if (mpp[s[i]] == 0)
                    mpp.erase(s[i]);

                i++;  
            }

            j++;
        }

        if (mn_len == INT_MAX)
            cout << 0 << "\n";
        else
            cout << mn_len << "\n";
    }

    return 0;
}