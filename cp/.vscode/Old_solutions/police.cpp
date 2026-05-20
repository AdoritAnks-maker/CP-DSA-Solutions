#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n ;
    cin >> n ;
    long long sum=0;
    long long event=0;
    long long untreated=0;
    for(long long i = 0;i<n;i++){
        cin >> event;
        if(event==-1){
            if(sum>0){
                sum--;
            }else{
                untreated++;
            }
        }else{
            sum+=event;
        }
    }
    cout << untreated << endl ;
    return 0;
}