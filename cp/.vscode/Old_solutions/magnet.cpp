#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n ;
    cin >> n;
    vector<string>arr(n);
    long long count = 1 ;
    for(long long i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    for(long long i = 1; i<n ;i++){
        if(arr[i]!=arr[i-1])count++;
    }
    cout << count << endl ;
    return 0;
}