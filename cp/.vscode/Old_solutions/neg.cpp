#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n ;
    vector<long long>arr(n);
    long long count =0;
    for(long long i = 0 ;i < n ;i++){
        cin >> arr[i];
        if(arr[i]<0){
            count++;
        }
    }
    cout << count << endl;
}