#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while(tc--){
        int n ;
        cin >> n ;
        vector<int>arr(n);
        for(int i = 0;i<n ;i++){
            cin >> arr[i];
        }
        int count =0;
        int mx_num=*max_element(arr.begin() , arr.end());
        for(auto x : arr){
            if(x==mx_num){
                count++;
            }
        }
        cout << count << endl;
    }
}