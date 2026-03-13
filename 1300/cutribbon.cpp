#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc ;
    while(tc--){
        int n , k;
        cin >> n >> k ;
        vector<int>arr(n);
        for(int i = 0; i< n ;i++){
            cin >> arr[i];
        }
        int count = 0;
        for(int i = 0; i< n ;i++){
            if(arr[i]>k){
                count++;
            }
        }
        cout << count << endl;
    }
}