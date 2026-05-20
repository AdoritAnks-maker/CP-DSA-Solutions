#include<bits/stdc++.h>
using namespace std;
int top=-1;
int stack_arr[4];

void push_data(int data){
    if(top=3){
        cout << "stack is full" << endl ;
        return ;
    }
    top=top+1;
    stack_arr[top]=data;

}
int pop_element()
{   
    if(top==-1){
        cout << "stack underflow" << endl ;
        exit(1);
    }
    int value;
    value=stack_arr[top];
    top=top-1;
    return value;
}


int main(){
    push_data(1);
    push_data(2);
    push_data(3);

}