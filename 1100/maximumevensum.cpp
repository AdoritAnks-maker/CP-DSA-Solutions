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
        long long a, b;
        cin >> a >> b;
        if (a % 2 == 0 && b % 2 == 1)
        {
            cout << -1 << endl;
        }
        else if (a % 2 == 1 && b % 2 == 0)
        {
            long long k = b / 2;
            b = b / k;
            a = a * k;
            long long evensum = (a + b);
            if (evensum % 2 == 0)
            {
                cout << evensum << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else if (a % 2 == 1 && b % 2 == 1)
        {
            long long k = b;
            b = b / k;
            a = a * k;
            long long evensum = (a + b);
            if (evensum % 2 == 0)
            {
                cout << evensum << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else if (a % 2 == 0 && b % 2 == 0)
        {
            long long k = b / 2;
            b = b / k;
            a = a * k;
            long long evensum2 = (a + b);
            if (evensum2 % 2 == 0)
            {
                cout << evensum2 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}