#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i = 0; i<n ;i++){
        cin >>arr[i];
    }
    sort(arr.begin(),arr.end());
    int second_largest=0;
    int maximum_element=arr[arr.size()-1];
    for(int i = n-2 ;i>=0;i--){
        if(arr[i]<maximum_element){
            second_largest=arr[i];
            break;
        }
    }
    cout << second_largest << endl;
    return 0;
}