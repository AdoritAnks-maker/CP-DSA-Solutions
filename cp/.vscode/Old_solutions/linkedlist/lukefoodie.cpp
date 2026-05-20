#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t ;
    cin >> t; 
    while(t--){
        long long n ,x;
        cin >> n >> x ;
        vector<int>arr(n);
        for(int i =0;i<n ;i++){
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());

        int eaten=0;
        int power=0;
        for(int i = 0;i<n ;i++){
            if(arr[i]<x){
                power+=arr[i];
                eaten++;
            }else{
                break;
            }
        }
        cout << eaten << endl ;

    }
}