#include<bits/stdc++.h>
using namespace std;


class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
  public:
    bool searchKey(Node* head, int key) {
        Node*curr=head ;
        while(curr!=nullptr){
            if(curr->data==key){
                return true;
            }
            curr=curr->next;
        }
        return false;
    }
};
