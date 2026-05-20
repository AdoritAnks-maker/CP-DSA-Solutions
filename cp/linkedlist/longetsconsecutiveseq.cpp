class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int lentt = 1;
        long long max_lentt = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1])
            {
                continue;
                else if (nums[i] == nums[i - 1] + 1)
                {
                    lentt++;
                }
            }
            else
            {
                lentt = 1;
            }
            max_lentt = max(lentt, max_lentt);
        }
        return max_lentt;
    }
};