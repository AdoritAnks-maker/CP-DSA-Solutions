#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t ;
    cin >> t;
    while(t--){
        long long a1,a2,a3,a4;
        cin >> a1 >> a2 >> a3 >> a4 ;
        long long suneet_wins=0;
        if(a1>a3 || a1>a4)suneet_wins++;
        
        if(a2>a3 || a2>a4)suneet_wins++;
        if(a1==a2 && a3==a4){
            cout << suneet_wins*2 << endl;
            break;
        }
        cout << suneet_wins << endl;
    }
    return 0;
}