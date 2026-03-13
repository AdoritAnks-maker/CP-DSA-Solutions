#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    int number = n / k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    long long ans = LLONG_MAX;
    int idx = -1;
    for (int i = 0; i < k; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j += k)
        {
            sum += nums[j];
        }
        if (sum < ans)
        {
            ans = sum;
            idx = i + 1;
        }
    }
    cout << idx << endl;
    return 0;
}