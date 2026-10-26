class Solution
{
public:
    int minDifference(vector<int> &nums)
    {
        int n = nums.size();
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
        }
        int k = sum / 2;
        vector<vector<bool>> dp(n + 1, vector<bool>(k + 1));
        for (int i = 0; i < n + 1; i++)
        {
            dp[i][0] = true;
        }
        for (int j = 1; j < k + 1; j++)
        {
            dp[0][j] = false;
        }
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < k + 1; j++)
            {
                if (nums[i - 1] <= j)
                {
                    dp[i][j] =
                        dp[i - 1][j - nums[i - 1]] ||
                        dp[i - 1][j];
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        int ans = INT_MAX;
        for (int j = 0; j <= k; j++)
        {
            if (dp[n][j])
            {
                ans = min(ans, abs(sum - 2 * j));
            }
        }
        return ans;
    }
};
