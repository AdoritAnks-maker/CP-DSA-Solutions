#include<bits/stdc++.h>
using namespace std ;

void selection_sort(int arr[] , int n){
    for(int i = 0 ;i < n -1 ;i++){
        int mini=i;

        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                mini=j;
            }
        }
        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
    int arr[]={5,4,3,2,1};
    int n = sizeof(arr)/ sizeof(arr[0]);

    selection_sort(arr,n);


}