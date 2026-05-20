#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={10, 23, 32, 12, 10, 98, 895, 89, 89};
    int n = arr.size();
    int min_idx=0;
    for(int i = 0;i<n-1;i++){
        min_idx=i;

        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }
        swap(arr[i] , arr[min_idx]);
    }
    for(auto x : arr){
        cout << x <<" ";
    }
    return 0;
}