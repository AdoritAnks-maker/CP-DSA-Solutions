class Solution
{
public:
    int count(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<vector<int>> dp(n + 1, vector<int>(k + 1));
        for (int i = 0; i < n + 1; i++)
        {
            dp[i][0] = 1;
        }
        for (int j = 1; j < k + 1; j++)
        {
            dp[0][j] = 0;
        }
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 0; j < k + 1; j++)
            {
                if (nums[i - 1] <= j)
                    dp[i][j] = dp[i - 1][j - nums[i - 1]] + dp[i - 1][j];
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }
        return dp[n][k];
    }
    int findTargetSumWays(vector<int> &nums, int target)
    {
        int n = nums.size();
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
        }
        if (abs(target) > sum)
        {
            return 0;
        }
        if ((sum + target) % 2 == 1)
        {
            return 0;
        }
        int total = (sum + target) / 2;
        int ans = count(nums, total);
        return ans;
    }
};