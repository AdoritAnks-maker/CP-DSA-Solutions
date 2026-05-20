#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6};
    int n = 6 ;
    stack<int>st;
    for(int i = 0 ;i<n ;i++){
        st.push(arr[i]);
    }
    for(int i = 0;i< n;i++){
        arr[i]=st.top();
        st.pop();
    }
    for(auto x : arr){
        cout << x << " " ;
    }
    return 0;
}