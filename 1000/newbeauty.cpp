#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        
        if(n > 1){
            int pos1 = -1, posn = -1;
            
            for(int i = 0; i < n; i++){
                if(arr[i] == 1) pos1 = i;
                if(arr[i] == n) posn = i;
            }
            
            swap(arr[pos1], arr[posn]);
        }
        
        for(auto x : arr){
            cout << x << " ";
        }
        cout << endl;
    }
}