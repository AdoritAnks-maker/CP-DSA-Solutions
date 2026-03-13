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
        int n;
        cin >> n;
        string s;
        cin >> s;

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == s[(i + 1) % n])
            {
                count++;
            }
        }

        if (count == 0)
            cout << n << '\n';
        else
            cout << n - count + 1 << '\n';
    }
    return 0;
}