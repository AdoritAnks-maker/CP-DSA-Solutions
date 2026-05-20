#include<bits/stdc++.h>
using namespace std;
string name = "Ankush";
int cnt = 0;
void print(int i,int n){
    if(i<1){
        return;
    }
    print(i-1,n);
    cout << i << " " ;
}

int main(){
    int n ;
    cin >> n ;
    print(n,n);
}