#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while(tc--){
        long long n , k;
        cin >> n >> k ;
        vector<long long>arr(n);
        for(int i =0 ;i<n ;i++){
            cin >> arr[i];
        }
        if(k%2==0){
            for(int i  =0; i<n ;i++){
                if(arr[i]%2==1){
                    arr[i]=arr[i]*k+arr[i];
                }
            }
        }else if(k%2==1){
            for(int i =0 ;i<n ;i++){
                if(arr[i]%2==1){
                    arr[i]+=k;
                }
            }
        }
        for(auto x : arr){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
