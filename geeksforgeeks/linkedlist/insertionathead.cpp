#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

class Solution
{
public:
    Node *insertathead(Node *head, int newdata)
    {
        Node *newNode = new Node(newdata, head);
        return newNode;
    }

    void printlinkedlist(Node *head)
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    Solution sol;

    // Creating a sample linked list: 2 -> 3
    Node *head = new Node(2);
    head->next = new Node(3);

    cout << "Original List: ";
    sol.printlinkedlist(head);

    // Inserting new node at head
    head = sol.insertathead(head, 1);

    cout << "After Insertion at Head: ";
    sol.printlinkedlist(head);

    return 0;
}