#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define mod 1000000007

bool islucky(long long n)
{
    while (n > 0)
    {
        if (n % 10 == 8)
        {
            return true;
        }
        n /= 10;
    }
    return false;
}
void solve()
{
    long long a;
    cin >> a;
    long long b = 1;
    while(true)
    {
        if (islucky(a + b))
        {
            cout << b << endl;
            break;
        }
        b++;
    }
}

int main()
{
    fast;
    solve();
    return 0;
}