#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long>arr(n);
    long long sum_arr=0;
    for(long long i=0;i<n;i++){
        cin >> arr[i];
    }
    long long sereja_moves=0;
    long long dima_moves=0;
    long long left=0;
    long long right=n-1;
    long long turn = 0;
    while(left<=right){
        if(arr[left]>arr[right]){
            if(turn==0)sereja_moves+=arr[left];
            else{
                dima_moves+=arr[right];
            }
            left++;
        }else{
            if(turn==0)sereja_moves+=arr[right];
            else{
                dima_moves+=arr[right];
            }
            right--;
        }
        turn = 1-turn ;
    }

    cout << sereja_moves << " " << dima_moves << endl;
    return 0;

}