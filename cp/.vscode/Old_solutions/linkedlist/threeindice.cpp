#include<bits/stdc++.h>
using namespace std ;

int main(){
    vector<int >temp;
    long long t ;
    cin >> t;
    while(t--){
        bool ok = false;
        long long n ;
        cin >> n ;
        vector<int>nums(n);
        for(int i = 0;i< n ;i++){
            cin >> nums[i];
        }
        for(int i = 0;i<n;i++){
            for(int j = i+1 ;j<n;j++){
                for(int k =j+1;k<n;k++){
                    if(i<j && j>k ){
                        ok=true;
                        temp[0]=i+1;
                        temp[1]=j+1;
                        temp[2]=k+1;
                        break;
                    }
                }
            }
        }
        if(ok){
            cout << "YES" << endl;
            for(auto x : temp){
                cout << x << " ";
            }
        }else{
            cout << "NO" << endl;
        }
    }
}