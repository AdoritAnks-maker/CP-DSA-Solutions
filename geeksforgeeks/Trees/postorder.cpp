#include <bits/stdc++.h>
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
    void poster(Node*node , vector<int>&ans){
        if(node==NULL){
            return ;
        }
        poster(node->left , ans);
        poster(node->right , ans);
        ans.push_back(node->data);
    }
    vector<int> postOrder(Node* root) {
        vector<int>res;
        poster(root , res);
        return res;
    }
};