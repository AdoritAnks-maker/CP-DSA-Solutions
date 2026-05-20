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
    ll n;
    cin >> n;
    ll count = 0;
    for (int i = 1; i < (1 << 10); i++)
    {
        string bin = bitset<10>(i).to_string();
        int pos = bin.find('1');
        bin = bin.substr(pos);
        ll num = stoll(bin);
        if (num <= n )
        {
            count++;
        }
    }
    cout << count << endl;
}

int main()
{
    fast;
    solve();
}