
#include<bits/stdc++.h>
using namespace std ;

int main(){
    vector<long long >sequence = {1,1};
    long long idx =-1;
    for(long long i = 1 ; i<13;i++){
        sequence.push_back(sequence[i]+sequence[i-1]);
        if(sequence[i]>pow(10,999)){
            idx=i+1;
            break;
        }
    }
    
    cout << idx <<endl;
}