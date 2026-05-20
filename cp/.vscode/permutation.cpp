#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n ;
    vector<long long>arr={1};
    for(long long i =2 ;i<=n;i++){
        arr.push_back(i);
    }
    for(auto x : arr){
        cout << x << " ";
    }
    return 0;
}