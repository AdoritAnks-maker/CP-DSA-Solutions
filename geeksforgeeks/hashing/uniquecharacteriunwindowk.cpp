#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> countDistinct(vector<int> &arr, int k)
    {
        int n = arr.size();
        map<int, int> mp;
        vector<int> ans;
        int i = 0;
        int j = 0;
        while (j < arr.size())
        {
            mp[arr[j]]++;

            if (j - i + 1 < k)
            {
                j++;
            }
            else if (j - i + 1 == k)
            {
                ans.push_back(mp.size());

                mp[arr[i]]--;

                if (mp[arr[i]] == 0)
                {
                    mp.erase(arr[i]);
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};