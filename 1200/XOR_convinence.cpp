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
            cout << n << " ";
            for (int i = 2; i <= n - 2; i += 2)
            {
                cout << i + 1 << " " << i << " ";
            }
            cout << 1 << endl;
        }
        else
        {
            cout << n - 1 << " ";
            for (int i = 2; i <= n - 3; i += 2)
            {
                cout << i + 1 << " " << i << " ";
            }
            cout << n << " " << 1;
        }
        cout << endl;
    }
    return 0;
}