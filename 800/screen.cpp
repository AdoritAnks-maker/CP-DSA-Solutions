#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    while (q--)
    {
        string s, t;
        cin >> s >> t;
        int common = 0;
        int time = s.length() + t.length();
        while (common < s.size() && common < t.size() && s[common] == t[common])
        {
            common++;
        }
        if (common > 0)
        {
            time -= common;
            time += 1;
        }
        cout << time << endl;
    }
}