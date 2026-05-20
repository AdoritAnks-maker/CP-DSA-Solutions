#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t ;
    cin >> t;
    while(t--){
        long long n , k ;
        cin >> n >> k ;
        long long count = 0;
        bool found = false;
        while(n>k){
            n = n/2 ;
            long long left = n ;
            long long right = n- left ;
            if(left == k  || right == k ){
                found=true;
                count++;
            }
        }if(found){
                cout << count << endl;
        }else{
            cout << -1 << endl;
        }
    }
}