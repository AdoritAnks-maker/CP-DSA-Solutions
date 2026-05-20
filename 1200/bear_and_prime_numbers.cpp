#include <bits/stdc++.h>
using namespace std;

const int N = 10000000 + 5;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<long long> cnt(N, 0);
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        cnt[x]++;
    }
    vector<int> f(N, 0);
    vector<bool> prime(N, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i <= N; i++)
    {
        if (prime[i])
        {
            for (int j = i; j <= N; j += i)
            {
                if (j > i)
                    prime[j] = false;
                    f[i] += cnt[j];
            }
        }
    }
    vector<long long> pref(N, 0);
    for (int i = 2; i < N; i++)
    {
        pref[i] = pref[i - 1] + f[i];
    }
    int m;
    cin >> m;
    while (m--)
    {
        long long l, r;
        cin >> l >> r;
        cout << pref[r] - pref[l - 1] << "\n";
    }
}