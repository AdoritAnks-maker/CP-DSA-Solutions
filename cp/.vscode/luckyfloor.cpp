#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a;
    cin >> a;
    if (a < 0 && a > -8)
    {
        cout << 8 - (a) << endl;
        return 0;
    }
    if (a % 10 == 8)
    {
        cout << 10 << endl;
        return 0 ;
    }
    else
    {
        cout << abs(8 - (a % 10)) << endl;
    }
}