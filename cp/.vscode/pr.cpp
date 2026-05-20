#include<bits/stdc++.h>
using namespace std;

int main(){
    long long total_sum = 0;
    long long sum = 0;
    for(long long i =1 ;i<=1000 ;i++){
        if(i%3==0 || i%5==0){
            total_sum+=i;
        }
    }
    for(long long i =1 ;i<1000;i++){
        if(i%15==0){
            sum+=i;
        }
    }
    cout << total_sum-sum << endl;
}