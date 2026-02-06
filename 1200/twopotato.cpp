#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long y, k, n;
    cin >> y >> k >> n;
    long long rem = (y % k);
    long long first_x = k - rem;
    bool found = false;
    for (int i = first_x; (first_x + y) <= n; first_x += k)
    {
        found = true;
        cout << first_x << " " ;     
    }
    if (!found)
    {
        cout << -1 << endl;
    }
    return 0;
}