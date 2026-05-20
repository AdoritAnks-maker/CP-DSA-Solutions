#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;

        long long a1 = a, b1 = b, n1 = n;
        long long a2 = a, b2 = b, n2 = n;
        long long prod1, prod2; //// reduce a dirst then reduce B
        long long reduceA = min(a1 - x, n1);
        a1 -= reduceA;
        long long remain = n - reduceA;
        long long reduceB = min(remain, b1 - y);
        b1 -= reduceB;
        prod1 = a1 * b1;

        long long reduceBfirst = min(b2 - y, n2);
        b2 -= reduceBfirst;
        long long remain2 = n - reduceBfirst;
        long long reduceAthen = (remain2, a2 - x);
        a2 -= reduceAthen;
        prod2 = a2 * b2;

        cout << min(prod1, prod2) << endl;
    }
    return 0;
}
