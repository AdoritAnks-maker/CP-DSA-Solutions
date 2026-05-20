#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution
{
public:
    int getMiddle(Node *head)
    {
        int len = 0;
        Node *curr = head;
        while (curr != NULL)
        {
            len++;
            curr = curr->next;
        }
        int mid;
        mid = (len / 2) + 1;
        Node *temp = head;
        for (int i = 1; i < mid; i++)
        {
            temp = temp->next;
        }
        return temp->data;
    }
};