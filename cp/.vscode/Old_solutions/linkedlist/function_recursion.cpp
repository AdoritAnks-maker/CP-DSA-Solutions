#include<bits/stdc++.h>
using namespace std;

void print_sum(int i , int sum ){
    if(i<1){
        cout << sum  << endl ;
        return ;
    }
return print_sum( i-1 , sum +i);
}

int main(){
    int n ;
    cin >> n ;
    print_sum(n , 0);
}