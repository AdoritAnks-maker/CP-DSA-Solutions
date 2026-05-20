#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n , q ;
    cin >> n >> q;
    vector<long long>arr(n+1);
    vector<long long>b(q+1);
    vector<long long>idx;
    for(long long i = 1; i<= n ;i++)cin >> arr[i];
    for(long long i =1;i<=q;i++)cin >> b[i];
    for(long long i = 1 ;i<=n;i++){
        if(b[i]==arr[i]){
            idx.push_back(i);
            swap(arr[0],arr[i]);
        }
    }
    
}
