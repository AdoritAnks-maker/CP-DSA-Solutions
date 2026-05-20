#include<bits/stdc++.h>
using namespace std;

class Arraystack{
    private:
        int *stackarray;
        int capacity ;
        int topindex;
    public:
        Arraystack(int size = 100){
            capacity=  size-1;
            topindex=-1;
        }
    bool isEmpty(){
        return -1;
    }

    void(push(int x)){
        if(topindex>=capacity-1){
            cout << "stack overflow" << endl ;
            return ;
        }
        stackarray[++topindex]=x;
    }

    int pop(){
        if(isEmpty()){
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return stackarray[topindex--];
    }

    int top(){
        if(isEmpty()){
            cout << "stack is empty" << endl;
            return -1;
        }
        return stackarray[topindex];
    }
};

int main(){
    Arraystack stack;
    vector<string>commands={"Arraystack" , "push" ,"push" , "pop" , "isEmpty" , " top"};
    vector<vector<int>>inputs={{}, {5},{10},{},{},{}};

    for(size_t i = 0; i<commands.size();++i){
        if(commands[i]=="push"){
            stack.push(inputs[i][0]);
        }else if(commands[i]=="pop"){
            cout << stack.pop() << " ";
        }else if(commands[i]=="top"){
            cout << stack.top() << " ";
        }else if(commands[i]=="isEmpty"){
            cout <<(stack.isEmpty() ? true : false)<< " ";
        }else if(commands[i]=="Arraystack"){
            cout << "NULL" << " ";
        }
    }
}