#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin >> t;
    while(t--){
        long long a,b , xk , yk , xq ,yq;
        cin >> a >> b ;
        cin >> xk >> yk ;
        cin >> xq >> yq;
        long long maxi = max(a,b);
        long long diff1 = abs(xq-xk);
        long long diff2 = abs(yq-yk);
        long long count = 0;
        for(int i =0;i<diff1;i++){
            for(int j =maxi-i  ;j<diff2 ;j++){
                if(i+j==xk , && abs(i-j)==)
            }
        }
    }
}