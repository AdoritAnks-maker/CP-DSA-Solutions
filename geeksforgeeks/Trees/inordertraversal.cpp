#include<bits/stdc++.h>
using namespace std;
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};


class Solution {
  public:
    void inorder(Node*node, vector<int>&ans){
        if(node==NULL){
            return ;
        }
        inorder(node->left , ans);
        ans.push_back(node->data);
        inorder(node->right, ans);
    }
    vector<int> inOrder(Node* root) {
        vector<int>ans;
        inorder(root, ans);
        return ans;
    }
};