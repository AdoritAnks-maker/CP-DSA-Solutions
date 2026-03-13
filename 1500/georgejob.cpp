#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, k;
    cin >> n >> m >> k;
    int ans = m * k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long sum = 0;
    for (int i = 0; i < m; i++)
    {
        sum += arr[i];
    }
    vector<long long> nums;
    nums.push_back(sum);
    for (int i = m; i < n; i++)
    {
        sum += arr[i];
        sum -= arr[i - m];
        nums.push_back(sum);
    }
    
}
