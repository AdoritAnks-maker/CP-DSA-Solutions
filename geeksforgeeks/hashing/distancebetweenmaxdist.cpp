#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxDistance(vector<int> &arr)
    {
        map<int, int> first_index;
        int max_distance = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (first_index.find(arr[i]) == first_index.end())
            {
                first_index[arr[i]] = i;
            }
            max_distance = max(max_distance, i - first_index[arr[i]]);
        }
        return max_distance;
    }
};