#include<bits/stdc++.h>
using namespace std;

class Stack{
    private:
        vector<int>v;
    public:
        Stack () {};

    void pushint(int val){
        if(v.empty()){
            cout << "Stack is Empty " << endl;
            return ;
        }
        v.push_back(val);
    }
    int popele(){
        if(v.empty()){
            cout << "Stack underflow" << endl;
            return -1;
        }
        int topelement = v.back();
        v.pop_back();
        return topelement;
    }
    int peek(){
        if(v.empty()){
            cout << "Stack is Empty" << endl;
        }
        return v.back();
    }
    bool isEmpty (){
        return v.empty();
    }

};

int main(){
    
}