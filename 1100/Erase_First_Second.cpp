#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string s(n, ' ');
        cin >> s;
        set<char> st;
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (!st.count(s[i]))
            {
                ans += (n - i);
                st.insert(s[i]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}