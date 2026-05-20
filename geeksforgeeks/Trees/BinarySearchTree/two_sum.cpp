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
    bool solve(map<int, int> &mpp, int k, TreeNode *root)
    {
        if (root == NULL)
        {
            return false;
        }
        if (mpp.find(k - root->val) != mpp.end())
        {
            return true;
        }
        mpp[root->val]++;
        return solve(mpp, k, root->left) || solve(mpp, k, root->right);
    }
    bool findTarget(TreeNode *root, int k)
    {
        map<int, int> mpp;
        return solve(mpp, k, root);
    }
};