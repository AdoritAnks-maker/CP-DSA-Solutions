#include <bits/stdc++.h>
using namespace std;

long long gcdnum(vector<long long> &nums)
{
    long long gcdnum = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        gcdnum = __gcd(gcdnum, nums[i]);
    }
    return gcdnum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<long long> result(n);
        for (int i = 0; i < n; i++)
        {
            result[i] = (arr[i] - i - 1);
        }
        vector<long long> ans(n);
        for (int i = 0; i < n; i++)
        {
            ans[i] = arr[i] - (n - i + 2);
        }
        // considering the first operation have beend done so far
        int start =1 ;
        int end =*min_element(ans.begin() , ans.end());
        while(start)
    }

}