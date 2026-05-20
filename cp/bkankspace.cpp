#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin >> t;
    while(t--){
        int n ;
        cin >> n;
        int count_zero=0;
        int max_space=0;
        vector<int>arr(n);
        for(int i =0 ;i<n ;i++){
            cin >> arr[i];
        }
        for(int i =0;i<n ;i++){
            if(arr[i]==0){
                count_zero++;
            }else{
                count_zero=0;
            }
            max_space=max(max_space,count_zero);
        }
        cout << max_space << endl ;
    }
}