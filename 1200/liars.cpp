#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc ;
    while(tc--){
        int n ;
        cin >> n;
        vector<int>arr(n);
        for(int i = 0; i< n ;i++){
            cin >> arr[i];
        }
        int actual = 0;
        for(int i  =0 ;i< n ; i++){
            int actua = 0;
            if(!(i>=arr[i])){
                actual++;
            }
            if(actual==i){
                cout << i << endl;
                continue;
            }
        }
        cout  << -1 << endl;
    }
    return 0;
}