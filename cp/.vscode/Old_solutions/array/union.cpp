#include<bits/stdc++.h>
using namespace std ;

int main(){
    vector<int>arr1={1,2,3,4,5};
    vector<int>arr2={2,3,4,4,5};
    set<int>temp;
    for(int i = 0 ;i<arr1.size();i++){
        temp.insert(arr1[i]);
    }
    for(int i = 0 ;i<arr2.size();i++){
        temp.insert(arr2[i]);
    }
    for(auto x : temp){
        cout << x << " ";
    }
    cout << endl;
}