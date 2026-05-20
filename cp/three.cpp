#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin >> t;
    while(t--){
        int n ;
        cin >> n ;
        vector<int>arr(n);
        for(int i= 0;i < n ;i++){
            cin >> arr[i];
        }
        for(int j =1 ;j<n-1;j++){
            int i =-1;
            int k =-1;
            int flag =0 ;
            for(int left = 0 ;left<j;left++){
                if(arr[left]<arr[j]){
                    i=left;
                    break;
                }
            }for(int right = j+1;right<n ;right++){
                if(arr[right]<arr[j]){
                    j=right;
                    break;
                }
            }if(i!=-1&&k!=-1){
                cout << "YES" << endl ;
                cout  << i+1 << " " << j+1 << " " << k+1;
                flag=1;
                break;
            }
            if(flag==0){
                cout << "NO" << endl;
            }
        }

    }
    return 0;
}