#include<bits/stdc++.h>
using namespace std ;

int appear(int num , vector<int>&arr){
    int n = arr.size();
    int count = 0; 
    for(int i = 0; i< n;i++)
    {
        if(arr[i]==num){
            count++;
        }
    }
    return count;
}

int main(){
    vector<int>arr={1,2,3,4,5,6,6,8,9,5,4,3,2,1,2,4,5};
    int n ;
    cin >> n ;
    cout << appear(n , arr);
}