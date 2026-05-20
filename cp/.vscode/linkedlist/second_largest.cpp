#include<bits/stdc++.h>
using namespace std ;

int main(){
    vector<int>arr={1,2,3,4,3,2,1,4,5,6,7,8,9,10};
    sort(arr.begin(),arr.end());
    int largest_element=arr[arr.size()-1];
    int second_largest=0;
    for(int i = arr.size()-2 ;i>=0;i--){
        if(arr[i]!=largest_element){
            second_largest=arr[i];
            break;
        }
    }
    cout << second_largest << endl;
    return 0; 
}