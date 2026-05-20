#include<bits/stdc++.h>
using namespace std ;

class Node{
    public:
        int data ;
        Node*next;

        Node(int x){
            data = x;
            next = nullptr;
        }
};

class Solution{
    public:
    void deletlinkedlist(Node*curr){
        while(curr!=nullptr){
            Node*temp=curr->next ;
            delete curr ;
            curr = temp ;
        }
    }
};