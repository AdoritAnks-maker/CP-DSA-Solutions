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
        long long n;
        cin >> n;
        bool found = false;
        for (long long a = 2; a * a <= n; a++)
        {
            if (n % a == 0)
            {
                long long n1 = n / a;
                for (long long b = a + 1; b * b <= n1; b++)
                {
                    if (n1 % b == 0)
                    {
                        long long c = n1 / b;
                        if (c != a && c != b)
                        {
                            cout << "YES" << endl;
                            cout << a << " " << b << " " << c << endl;
                            found = true;
                            break;
                        }
                    }
                }
                if (found)
                {
                    break;
                }
            }
        }
        if (!found)
        {
            cout << "NO" << endl;
        }
    }
}