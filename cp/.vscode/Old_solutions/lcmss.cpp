#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a , long long b){
    if(b==0){
        return a;
    }else{
        return gcd(b,a%b);
    }
}

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n ;
        cin >> n ;
        long long min_lcm = INT_MAX;
        long long best_a=1 ;
        long long best_b=1;
        for(long long a =1 ;a<n;a++){
            long long b = n-a;
            long long g = gcd (a,b);
            long long lcm_num=(a/g)*b;
            if(lcm_num<min_lcm){
                min_lcm=lcm_num;
                best_a=a;
                best_b=b;
            }
        }
        cout << best_a <<" " << best_b << endl;
    }
    return 0;
}