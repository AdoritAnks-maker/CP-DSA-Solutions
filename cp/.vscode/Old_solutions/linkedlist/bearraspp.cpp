#include<bits/stdc++.h>
using namespace std;
    
int main(){
    long long n , c ;
    cin >> n >> c;
    vector<int>arr(n);
    for(int i = 0;i<n ;i++){
        cin >> arr[i];
    } 
    int max_profit=0;
    for(int i = 1;i<n ;i++){
            int profit= arr[i-1]-arr[i]-c ;
            max_profit=max(max_profit , profit);
        }
    cout << max_profit << endl ;
}