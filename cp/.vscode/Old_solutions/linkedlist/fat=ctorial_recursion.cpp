#include<bits/stdc++.h>
using namespace std;

int fact_num(int n , int product ){
    if(n<2){
        cout << product << endl;
        return 0 ;
    }

    fact_num(n-1 , product*(n-1));
}

int main(){
    int n ;
    cin >> n ;
    int prod=n ;
    fact_num(n , prod);

}