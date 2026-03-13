#include <bits/stdC++.h>
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
        string s(n, ' ');
        cin >> s;
        int count_same = 0;
        for (int i = 0; i + 1 < n; i++)
        {
            if (s[i] == s[i + 2])
            {
                count_same++;
            }
        }
        cout << (n - count_same - 1) << endl;
    }
    return 0;
}