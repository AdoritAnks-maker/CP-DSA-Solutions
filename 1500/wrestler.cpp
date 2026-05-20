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

void solve()
{
    int n;
    cin >> n;
    int last;
    int sum1 = 0;
    int sum2 = 0;
    vector<ll> first, second;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        last = x;
        if (x > 0)
        {
            first.push_back(x);
            sum1 += x;
        }
        if (x < 0)
        {
            second.push_back(-x);
            sum2 += (-x);
        }
    }
    if (sum1 > sum2)
    {
        cout << "first" << endl;
        return;
    }
    if (sum2 > sum1)
    {
        cout << "second" << endl;
        return;
    }
    if (first > second)
    {
        cout << "first" << endl;
        return;
    }
    if (second > first)
    {
        cout << "second" << endl;
        return;
    }
    if (last > 0)
    {
        cout << "first" << endl;
    }
    else
    {
        cout << "second" << endl;
    }
}

int main()
{
    fast;
    solve();
}