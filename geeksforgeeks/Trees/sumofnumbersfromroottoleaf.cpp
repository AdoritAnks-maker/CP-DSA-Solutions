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
    void solve(TreeNode *root, vector<int> path, vector<vector<int>> &ans)
    {
        if (root == NULL)
            return;
        path.push_back(root->val);
        if (root->left == NULL && root->right == NULL)
        {
            ans.push_back(path);
            return;
        }
        solve(root->left, path, ans);
        solve(root->right, path, ans);
    }
    int sumNumbers(TreeNode *root)
    {
        vector<vector<int>> ans;
        vector<int> path;
        solve(root, path, ans);
        vector<int> arr;
        for (int i = 0; i < ans.size(); i++)
        {
            string sum = "";
            for (int j = 0; j < ans[i].size(); j++)
            {
                sum += to_string(ans[i][j]);
            }
            arr.push_back(stoi(sum));
        }
        int total_sum = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            total_sum += arr[i];
        }
        return total_sum;
    }
};