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
    void solve(TreeNode *root, vector<int> &path, vector<vector<int>> &ans)
    {
        if (root == NULL)
        {
            return;
        }
        path.push_back(root->val);
        if (root->left == NULL && root->right == NULL)
        {
            ans.push_back(path);
            path.pop_back();
            return;
        }
        else
        {
            solve(root->left, path, ans);
            solve(root->right, path, ans);
        }
        path.pop_back();
    }
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        vector<vector<int>> ans;
        vector<int> path;
        solve(root, path, ans);
        for (int i = 0; i < ans.size(); i++)
        {
            int sum = 0;
            for (int j = 0; j < ans[i].size(); j++)
            {
                sum += ans[i][j];
            }
            if (sum == targetSum)
            {
                return true;
            }
        }
        return false;
    }
};