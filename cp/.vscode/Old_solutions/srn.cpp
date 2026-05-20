#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--)
    {
        long long n ;
        cin >> n ;
        vector<long long>arr;
        while(n>0){
            long long remainder=n%10;
            if(remainder>0){
                arr.push_back(remainder);
            }
            n/=10;
        }
    }
}