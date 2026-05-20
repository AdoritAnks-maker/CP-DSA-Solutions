#include<bits/stdc++.h>
using namespace std;

class Solution{
    int largest_element(vector<int>&arr){
        int n = arr.size();
        for(int i = 0; i< n ;i++){
            cin >> arr[i];
        }
        int max_element=arr[0];
        for(int  i = 0 ;i < n ; i++){
            if(arr[i]>max_element){
                max_element=arr[i];
            }
        }
        return max_element;
    }
};
