#include<bits/stdc++.h>
using namespace std ;

int main(){
    long long  n ;
    cin >> n ;
    vector<int>arr(n);
    for(int i = 0 ;i< n;i++){
        cin >> arr[i];
    }
    sort(arr.begin() , arr.end());
    long long  count =  0 ;
    for(int i = 0 ;i< n;i++){
        count+=(abs(arr[i]-(i+1)));
    }
    cout << count << endl ;

}