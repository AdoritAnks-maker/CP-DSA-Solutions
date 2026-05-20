#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long ans = n % 3;
        if (n == 2)
        {
            cout << 2 << endl;
        }
        else if (n == 3)
        {
            cout << 3 << endl;
        }
        else if (n % 3 == 0 || n%2==0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << ans - 1 << endl;
        }
    }
}