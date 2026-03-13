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
        long long ans = INT_MAX;
        for (long long add = 0; add < 35; add++)
        {
            long long operations = add;
            long long new_b = b + add;
            if (new_b == 1)
            {
                continue;
            }
            long long copy_a = a;
            while (copy_a > 0)
            {
                copy_a /= new_b;
                operations++;
            }
            ans = min(ans, operations);
        }
        cout << ans << endl;
    }
    return 0;
}