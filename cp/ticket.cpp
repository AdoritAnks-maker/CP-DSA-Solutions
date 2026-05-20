#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n ;
    cin >> n;
    vector<long long>arr(n);
    for(long long i = 0; i< n ;i++)cin >> arr[i];
    long long count25=0;
    long long count50=0;
    long long count100=0;
    for(long long i = 0; i< n ;i++){
        if(arr[i]==25){
            count25++;
        }else if(arr[i]==50){
            if(count25>0){
                count25--;
                count50++;
            }else{
                cout << "NO" << endl ;
                break;
            }
        }else if(arr[i]==100){
            if(count25>0 && count50>0){
                count25--;
                count50--;
            }else if(count25>=3){
                count25-=3;
            }else{
                cout << "NO" << endl;
                break;
            }
        }
    }
    cout << "YES" << endl ;
    return 0;
}