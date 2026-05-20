#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, d;
    cin >> n >> d;
    vector<pair<long long, long long>> pairs(n);
    for (int i = 0; i < n; i++)
    {
        cin >> pairs[i].first >> pairs[i].second;
    }
    sort(pairs.begin(), pairs.end());
    long long ans = 0;
    long long sum = 0;
    int left = 0;
    int right = 0;
    while (right < n)
    {
        sum += pairs[right].second;
        while (pairs[right].first - pairs[left].first >= d)
        {
            sum -= pairs[left].second;
            left++;
        }
        right++;
        ans = max(ans, sum);
    }
    cout << ans << endl;
}