#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

class Solution
{
public:
    vector<int> bottomView(Node *root)
    {
        vector<int> ans;
        queue<pair<Node *, int>> q;
        map<int, int> mpp;
        if (root == NULL)
        {
            return ans;
        }
        q.push({root, 0});
        while (!q.empty())
        {
            auto p = q.front();
            q.pop();
            Node *node = p.first;
            int line = p.second;
            mpp[line] = node->data;

            if (node->left != NULL)
            {
                q.push({node->left, line - 1});
            }
            if (node->right != NULL)
            {
                q.push({node->right, line + 1});
            }
        }
        for (auto x : mpp)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};