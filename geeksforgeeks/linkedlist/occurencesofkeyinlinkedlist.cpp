#include<bits/stdc++.h>
using namespace std;



struct node
{
    int data;
    struct node* next;

    node(int x){
        data = x;
        next = NULL;
    }
}
class Solution {
  public:
    int count(struct Node* head, int key) {
        int count = 0;
        Node*curr=head;
        while(curr!=NULL){
            if(curr->data==key){
                count++;
            }
            curr=curr->next;
        }
        return count;
    }
};