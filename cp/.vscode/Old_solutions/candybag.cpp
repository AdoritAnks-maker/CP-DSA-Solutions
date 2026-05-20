#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n ;
    cin >> n;
    long long total_sum=(n*n)*(n*n+1)/2;
    long long sum_each_row=total_sum/n;
    vector<long long >arr;
    for(long long i =1;i<n*n;i++){
        arr.push_back(i);
    }

    long long num1=n;
    while(num1--){
        for(long long i=1;i<n*n/2;i++){
            cout << arr[i] <<" ";
        }
        for(long long i =arr.size();i>n*n/2;i--){
            cout << arr[i] << " ";
        }
        cout << endl ;
    }
    return 0;
}