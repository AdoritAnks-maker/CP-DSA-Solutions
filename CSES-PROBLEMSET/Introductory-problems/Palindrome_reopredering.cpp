#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    map<char, long long> mp;

    for (char c : s)
        mp[c]++;

    string res = "";
    string mid = "";
    long long odd = 0;

    for (auto x : mp)
    {
        char p = x.first;
        long long f = x.second;

        if (f % 2 == 1)
        {
            odd++;
            mid = p;
        }

        res += string(f / 2, p);
    }

    if (odd > 1)
    {
        cout << "NO SOLUTION\n";
        return 0;
    }

    string right = res;
    reverse(right.begin(), right.end());

    string ans = res + mid + right;

    cout << ans << "\n";
}