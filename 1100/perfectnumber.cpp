#include <bits/stdc++.h>
using namespace std;

long long intnum(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    cin >> k;
    int ans = 0;
    while (k)
    {
        ans++;
        if (intnum(ans) == 10)
        {
            k--;
        }
    }
    cout << ans << endl;
    return 0;
}