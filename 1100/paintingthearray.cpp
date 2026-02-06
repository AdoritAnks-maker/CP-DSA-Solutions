#include <bits/stdc++.h>
using namespace std;

long long gcdnumeven(vector<long long> &nums)
{
    if (nums.size() == 0) return 0;
    long long  g = nums[0];
    for (int i = 0; i < nums.size(); i += 2)
    {
        g = __gcd(g, nums[i]);
        if (g == 1) break;
    }
    return g;
}

long long gcdnumodd(vector<long long > &nums)
{
    if (nums.size() < 2) return 0; 
    long long  g = nums[1];
    for (int i = 1; i < nums.size(); i += 2)
    {
        g = __gcd(g, nums[i]);
        if (g == 1) break;
    }
    return g;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<long long > arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long oddgcd = gcdnumodd(arr);
        long long evengcd = gcdnumeven(arr);

        bool odd_ok = true;
        bool even_ok = true;

        for (int i = 0; i < n; i += 2)
        {
            if (arr[i] % oddgcd == 0 && oddgcd != 0)
            {
                odd_ok = false;
                break;
            }
        }

        for (int i = 1; i < n; i += 2)
        {
            if (arr[i] % evengcd == 0 && evengcd != 0)
            {
                even_ok = false;
                break;
            }
        }

        if (odd_ok && oddgcd != 0)
            cout << oddgcd << endl;
        else if (even_ok && evengcd != 0)
            cout << evengcd << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}
