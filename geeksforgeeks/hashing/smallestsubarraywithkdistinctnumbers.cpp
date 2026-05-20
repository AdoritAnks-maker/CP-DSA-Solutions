#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int smallestsubarraykdistinct(vector<int> &arr, int k)
    {
        int n = arr.size();
        map<int, int> mp;
        int min_i = -1;
        int min_j = -1;
        int i = 0;
        int j = 0;
        vector<int> ap;
        int ans = INT_MAX;
        while (j < n)
        {
            mp[arr[j]]++;

            if (mp.size() < k)
            {
                j++;
            }
            else if (mp.size() == k)
            {
                ans = min(ans, j - i + 1);
                min_i = i;
                min_j = j;
                ap = {min_i, min_j};
            }
            else if (mp.size() > k)
            {
                while (mp.size() > k)
                {
                    mp[arr[i]]--;
                    if (mp[arr[i]] == 0)
                    {
                        mp.erase(arr[i]);
                    }
                    i++;
                }
                j++;
            }
        }
        return ans;
    }
};