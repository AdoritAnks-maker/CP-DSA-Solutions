#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t ;
    while(t--){
        long long a ,b, c ;
        cin >> a >> b >> c ;
        if(c%2==1)
        {
            if(a>b){
                cout << "First" << endl;
            }else{
                cout << "Second" << endl;
            }
        }
        else
        {
            if(a>b){
                cout << "First" << endl;
            }else{
                cout << "Second" << endl;
            }
        }
    }
    return 0;
}