#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long cnt = 1;

        while (n > 0)
        {
            int d = n % 10;
            n /= 10;
            long long ways = 0;
            for (int i = 0; i <= d; i++)
            {
                for (int j = 0; j <= d; j++)
                {
                    if (d - i - j >= 0)
                    {
                        ways++;
                    }
                }
            }

            cnt *= ways;
        }

        cout << cnt << endl;
    }

    return 0;
}