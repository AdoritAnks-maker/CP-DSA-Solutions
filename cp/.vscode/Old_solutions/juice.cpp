#include<bits/stdc++.h>
using namespace std ;

int main(){
    long long n , b ,d ;
    cin >> n >> b >> d;
    long long sum = 0;
    long long count = 0;
    vector<long long >arr(n);
    for(long long i = 0; i<n ;i++){
        cin >> arr[i];
    }
    for(long long i =0 ;i< n;i++){
        if(arr[i]>b)continue;
        sum+=arr[i];
        if(sum>d){
            count++;
            sum=0;
        }
    }
    cout << count << endl ;
    return 0;

}