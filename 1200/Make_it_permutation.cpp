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
        cout << 2 * n - 1 << endl;
        for (int i = 1; i < n; i++)
        {
            cout << i << " " << 1 << " " << i << endl;
            cout << i << " " << i + 1 << " " << n << endl;
        }
        cout << n << " " << 1 << " " << n << endl;
    }
    return 0;
}