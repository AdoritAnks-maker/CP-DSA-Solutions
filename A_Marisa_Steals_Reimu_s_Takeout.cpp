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
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
            count0++;
        else if (v[i] == 1)
            count1++;
        else
            count2++;
    }
    int ans1 = min(count1, count2);
    int res = count0;
    int kp = (count1 - ans1) / 3;
    int pk = (count2 - ans1) / 3;
    int fin_ans = res + ans1 + kp + pk;
    cout << fin_ans << endl;
}

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
}