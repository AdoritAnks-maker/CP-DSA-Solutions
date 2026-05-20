#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin >> t;
    while(t--){
        int n ;
        cin >> n ;
        vector<int>arr(n);
        if(n<2){
            cout <<  0 << endl ;
            continue ;
        }
        for(int i =0;i<n;i++){
            cin >> arr[i];
        }

        if(!is_sorted(arr.begin() , arr.end())){
            cout << 0 << endl ;
            continue ;
        }
        int minigap=INT_MAX;
        for(int i =0;i+1<n;i++){
            int gap=arr[i+1]-arr[i];
            minigap=min(minigap , gap);
        }
        int ans = (minigap/2 )+1 ;
        cout << ans << endl;
    }
}