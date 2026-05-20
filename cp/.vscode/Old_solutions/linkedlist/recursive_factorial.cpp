#include<bits/stdc++.h>
using namespace std;

int factorial(int num){
    if(num==0){
        return 1 ; // factorial of  0 is 1 
    }

    return num*factorial(num-1); // returning the factorail of the number by multiplying in descending order
}

int main(){
    int n ;
    cin >> n ;
     cout << factorial(n);
}