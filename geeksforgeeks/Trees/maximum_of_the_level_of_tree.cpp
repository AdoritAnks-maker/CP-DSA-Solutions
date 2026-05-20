#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    vector<int> largestValues(TreeNode *root)
    {
        queue<pair<TreeNode *, int>> q;
        vector<int> ans;
        if (root == NULL)
        {
            return ans;
        }
        map<int, int> mpp;
        q.push({root, 0});
        while (!q.empty())
        {
            auto p = q.front();
            TreeNode *node = p.first;
            q.pop();
            int level = p.second;
            if (mpp.find(level) != mpp.end())
            {
                mpp[level] = max(mpp[level], node->val);
            }
            else
            {
                mpp[level] = node->val;
            }
            if (node->left != NULL)
            {
                q.push({node->left, level + 1});
            }
            if (node->right != NULL)
            {
                q.push({node->right, level + 1});
            }
        }
        for (auto x : mpp)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};