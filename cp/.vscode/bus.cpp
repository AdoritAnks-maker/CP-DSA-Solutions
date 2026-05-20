#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        vector<string> rows(3);
        bool found = false;
        for(int i = 0; i < 3; i++){
            cin >> rows[i];
        }
        for(int i = 0; i < 3; i++){
            if(rows[i] == "OO"){
                rows[i] = "++";
                found = true;
                break;
            }
        }
        if(found){
            cout << "YES" << endl;
            for(int i = 0; i < 3; i++){
                cout << rows[i] << endl;
            }
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
