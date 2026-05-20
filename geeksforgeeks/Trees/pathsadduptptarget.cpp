#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
                                                       right(right) {}
};

class Solution
{
public:
    void solve(TreeNode *root, int sum, vector<int> &path,
               vector<vector<int>> &ans, int target)
    {
        if (root == NULL)
        {
            return;
        }
        path.push_back(root->val);
        sum += root->val;
        if (root->left == NULL && root->right == NULL)
        {
            if (sum == target)
            {
                ans.push_back(path);
            }
            path.pop_back();
            return;
        }
        solve(root->left, sum, path, ans, target);
        solve(root->right, sum, path, ans, target);

        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode *root, int targetSum)
    {
        vector<vector<int>> ans;
        vector<int> path;
        int sum = 0;
        solve(root, sum, path, ans, targetSum);
        return ans;
    }
};