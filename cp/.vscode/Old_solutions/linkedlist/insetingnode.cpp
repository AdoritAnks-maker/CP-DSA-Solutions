#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data ;
        Node*next;

        Node(int data1 , Node*next1){
            data=data1;
            next=next1;
        }

        Node(int data1){
            data=data1;
            next=nullptr;
        }
};

class Solution{
    public:
        Node*insertathead(Node*head , int newdata){
            Node*newNode= new Node(newdata, head);
        }
};
