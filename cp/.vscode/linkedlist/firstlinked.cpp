#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        long long data;
        Node*next;

        Node(long long data1 , Node*next1){
            data=data1;
            next=next1;
        }

        Node(long long data1){
            data = data1;
            next= nullptr;
        }
};

int main(){
    vector<long long>arr={2,3,5,7};
    Node*y=new Node(arr[0]);
    cout << y << endl;
    cout << y->data << endl;

    return 0;
}

