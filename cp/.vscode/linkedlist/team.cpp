#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t ;
    cin >> t ;
    while(t--){
        long long n ;
        cin >> n ;
        vector<int>arr(n);
        vector<int>temp;
        set<int>nums;
        for(int i =0 ;i< n;i++){
            cin >> arr[i];
            nums.insert(arr[i]);
        }
        if(nums.size()==n){
            cout << 1 << endl ;
            break;
        }
        if(n==1){
            cout << 0 << endl ;
            break;
        }else{
            cout << n-nums.size() << endl ;
        }
        return 0;

    }
}