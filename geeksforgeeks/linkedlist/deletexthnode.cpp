#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        
        // If the list is empty
        if(head == nullptr) return head;

        // Case 1: delete the first node
        if(x == 1){
            Node* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        Node* curr = head;
        int count = 1;   // start from 1 because head is position 1

        // move to (x-1)th node
        while(count < x-1 && curr->next != nullptr){
            curr = curr->next;
            count++;
        }

        // if x is greater than the length of the list
        if(curr->next == nullptr) return head;

        Node* temp = curr->next;   // node to delete
        curr->next = temp->next;   // link change

        delete temp;

        return head;
    }
};