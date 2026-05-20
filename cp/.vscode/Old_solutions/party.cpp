#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n , k ;
    cin >> n >> k ;
    long long remaining_time=240-k;
    long long problem_count=0;
    for(long long i = 1 ;i<=n;i++){
        remaining_time-=5*i;
        if(remaining_time>=0){
            problem_count++;
        }
        
    }
    cout << problem_count << endl;
}