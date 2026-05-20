#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,d ;
    cin >> n >>  d ;
    vector<long long>arr(n);
    for(int i = 0;i < n ;i++){
        cin >> arr[i];
    }
    sort(arr.begin() , arr.end());
    long long left =-1;
    long long right = n-1;
    long long team_size = 1 ;
    long long teams =0;
    while(left<right){
        if(arr[right]*team_size <=d && left < right){
            left++;
            team_size++;
        }else{
            teams++;
            right--;
            team_size=1;
        }
    }
    cout << teams << endl;
}