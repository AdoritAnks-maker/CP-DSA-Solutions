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
    int preidx = 0;
    TreeNode *build(vector<int> &preorder, vector<int> &inorder, int l, int r)
    {
        if (l > r)
        {
            return NULL;
        }
        TreeNode *root = new TreeNode(preorder[preidx++]);
        int idx = l;
        for (int i = l; i <= r; i++)
        {
            if (inorder[i] == root->val)
            {
                idx = i;
                break;
            }
        }
        root->left = build(preorder, inorder, l, idx - 1);
        root->right = build(preorder, inorder, idx + 1, r);

        return root;
    }
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
    {
        int n = inorder.size();
        preidx = 0;
        return build(preorder, inorder, 0, n - 1);
    }
};