
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = nullptr;
    }
};


class Solution {
  public:
    int GetNth(Node *head, int index) {
        Node*curr = head ;
        int count  =1;
        while(count <index  && curr->next!=nullptr){
            curr=curr->next;
            count++;
        }
        if(curr!=nullptr){
            return curr->data;
        }
        return -1;
    }
};