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
        long long l, r, c;
        cin >> l >> r >> c;

        long long L = (l + c - 1) / c; // ceil(l/c)
        long long R = r / c;           // floor(r/c)

        if (L > R)
        {
            cout << -1 << " " << -1 << "\n";
            continue;
        }

        for (long long y = R; y >= L; y--)
        {
            if (__gcd(L, y) == 1)
            {
                cout << L * c << " " << y * c << "\n";
                break;
            }
            if (y == L)
                cout << -1 << " " << -1 << "\n";
        }
    }
}