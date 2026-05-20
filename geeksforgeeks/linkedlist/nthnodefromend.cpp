#include<bits/stdc++.h>
using namespace std;
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        int len = 0;
        Node*temp = head;
        while(temp!=NULL){
            len++;
            temp=temp->next ;
        }
        if(k >len)return -1;
        int pos = len-k+1;
        Node*curr=head ;
        int count  =1;
        while(count<pos && curr!=NULL){
            curr=curr->next;
            count++;
        }
        return curr->data;
    }
};