#include <bits/stdc++.h>/
using namespace std;

class Solution
{
public:
    void solve(int start, int sum, vector<int> &candidates, vector<int> &op,
               vector<vector<int>> &res, int target)
    {
        if (sum == target)
        {
            res.push_back(op);
            return;
        }
        if (sum > target)
            return;
        for (int i = start; i < candidates.size(); i++)
        {
            op.push_back(candidates[i]);
            solve(i, sum + candidates[i], candidates, op, res, target);
            op.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<int> op;
        vector<vector<int>> res;
        int start = 0;
        int sum = 0;
        solve(start, sum, candidates, op, res, target);
        return res;
    }
};