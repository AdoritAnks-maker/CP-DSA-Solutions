#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long >arr(n);
    for(long long i =0 ;i< n;i++){
        cin >> arr[i];
    }
    int count25=0;
    int count50=0;
    int count75=0;
    bool ok= false;
    for(long long i =0 ;i< n;i++){
        if(arr[i]==25)count25++;
        int balance=(arr[i]-25);
        if(balance%25<=count25){
            ok=true;
        }
    }
    if(!ok){
        cout << "NO" << endl ;
    }else{
        cout <<"YES" << endl;
    }
}