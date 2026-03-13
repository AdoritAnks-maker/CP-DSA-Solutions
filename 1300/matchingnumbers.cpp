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
        if (n % 2 == 0)
        {
            cout << "NO" << endl;
            continue;
        }
        int left = 1;
        int right = 2 * n;
        cout << "YES" << endl;
        for (int i = 1; i <= n; i += 2)
        {
            cout << i << " " << right << endl;
            right--;
        }
        for (int i = 2; i <= n; i += 2)
        {
            cout << i << " " << right << endl;
            right--;
        }
    }
    return 0;
} 