#include<bits/stdc++.h>
using namespace std;


class Node {
  public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        Node*curr=head ;
        if(head==nullptr){
            return new Node(x);
        }
        while(curr->next!=nullptr){
            curr=curr->next;
        }
        curr->next = new Node(x);
        return head; 
    }
};