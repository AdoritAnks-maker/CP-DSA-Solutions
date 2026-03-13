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
        map<long long, long long> freq;
        vector<long long> prefsum(s.size() + 1, 0);
        prefsum[0] = 0;
        freq[0]++;
        for (int i = 1; i < s.size(); i++)
        {
            prefsum[i] = prefsum[i - 1] + (s[i - 1] - '0');
        }
        int count = 0;
        for (auto x : freq)
        {
            count += x.second * (x.second - 1) / 2;
        }
        cout << count << endl;
    }
    return 0;
}