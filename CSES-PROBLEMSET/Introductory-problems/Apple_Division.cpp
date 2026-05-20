#include <bits/stdc++.h>
using namespace std;

vector<long long> arr;
int n ;

long long ans = LLONG_MAX;
void solve(int idx, long long sum1, long long sum2)
{
    if (idx == n)
    {
        ans = min(ans, abs(sum1 - sum2));
        return ;
    }
    solve(idx + 1, sum1 + arr[idx], sum2);
    solve(idx + 1, sum1, sum2 + arr[idx]);
}

int main()
{

    cin >> n;
    arr.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    solve(0, 0, 0);
    cout << ans << endl;
}