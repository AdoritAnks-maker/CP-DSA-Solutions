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
    int countNodes(Node *head)
    {
        int count = 0;
        Node *curr = head;
        while (curr != nullptr)
        {
            count++;
            curr = curr->next;
        }
        return count  ;
    }
};

