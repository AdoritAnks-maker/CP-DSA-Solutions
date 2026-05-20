#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin >> t;
    while(t--){
        int n ;
        cin >>  n ;
        vector<int>arr(n);
        long long negative_count=0;
        long long positive_count=0;
        long long operations=0;
        for(int i = 0 ;i<n;i++){
            cin >> arr[i];
        }
        for(int i=0;i<n ;i++){
            if(arr[i]==1){
                positive_count++;
            }else{
                negative_count++;
            }
        }
        while(positive_count<negative_count||negative_count%2==1){
            operations++;
            positive_count++;
            negative_count--;
        }
        cout << "operations" << endl;
    }
    return 0;
}