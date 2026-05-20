#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n , y , k; 
    cin >> n >> y >> k ;
    vector<long long>arr;
    for(long long i = 1; i +y<= n ; i++){
        if(i%k==0){
            arr.push_back(i);
        }
    }
    if(arr.size()==0){
        cout << -1 << endl;
    }
    else{
        for(long long i = 0; i < arr.size(); i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}