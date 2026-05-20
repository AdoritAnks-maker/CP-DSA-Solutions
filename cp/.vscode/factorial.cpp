#include<bits/stdc++.h>
using namespace std ;

int main(){
    long long n ;
    cin >> n ;
    vector<long long >power_sum={1};
    for(long long i =1 ;i<=n;i++){
        long long carry =0;
        for(long long j = 0 ; j<power_sum.size();j++){
            long long value=power_sum[j]*2+carry;
            power_sum[j]=value%10;
            carry=value/10;
        }
        while(carry){
            power_sum.push_back(carry%10);
            carry/=10;
        }
    }
    long long sum =0 ;
    for(auto x : power_sum){
        sum+=x;
    }
    cout << sum << endl ;
    return 0;
}