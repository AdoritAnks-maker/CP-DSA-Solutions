#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
    vector<int>arr(n);
    for(int i =0 ;i<n ;i++){
        cin >> arr[i];
    }
    int maximum_element= arr[0];
    for(int i = 0;i<n ;i++){
        if(arr[i]>maximum_element){
            maximum_element=arr[i];
        }
    }
    cout << maximum_element << endl;
    return 0;
}