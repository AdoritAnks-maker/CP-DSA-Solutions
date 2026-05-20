#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , a, b , c ;
    cin >> n >> a >> b >> c ;
    int min_ans = min(a , min(b,c));
    int result = n % min_ans;
    int count= 0;
    while(result!= a || result!=b || result != c){
        count++ ;
    }
    cout << count << endl ;
}