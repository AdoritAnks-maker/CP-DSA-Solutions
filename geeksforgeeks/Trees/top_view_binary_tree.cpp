#include <bits/stdc++.H>
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
    vector<int> topView(Node *root)
    {
        map<int, int> mpp;
        vector<int> ans;
        queue<pair<Node *, int>> q;
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
            if (mpp.find(line) == mpp.end())
            {
                mpp[line] = node->data;
            }
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