#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long w, h, d;
    cin >> w >> h >> d;

    long long n;
    cin >> n;

    // Total surface area of original cuboid
    long long area = 2 * (w*h + h*d + w*d);

    // Must divide evenly
    if (area % n != 0)
    {
        cout << -1 << endl;
        return 0;
    }

    long long ans = area / n;

    // Search from large to small to get outputs like 9 3 0
    for (long long i = ans; i >= 0; i--)
    {
        for (long long j = ans; j >= 0; j--)
        {
            for (long long k = ans; k >= 0; k--)
            {
                if (i*j + j*k + i*k == ans)
                {
                    cout << i << " " << j << " " << k << endl;
                    return 0;
                }
            }
        }
    }

    cout << -1 << endl;
}
