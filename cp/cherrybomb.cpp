#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n , k;
        cin >>n >> k;
        vector<int >a(n);
        vector<int>b(n);
        for(int i =0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
        }
       int sp = -1;
       for(int i =0;i<n;i++){
        if(b[i]!=-1){
            if(sp==-1)sp=a[i]+b[i];
            if(sp!=a[i]+b[i]){
                cout << 0 << endl;
                return  ;
            }
        }
       }
        
}