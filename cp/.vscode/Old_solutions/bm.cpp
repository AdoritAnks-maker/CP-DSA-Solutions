#include<bits/stdc++.h>
using namespace std;

int main(){
    long long arr[5][5];
    for(long long i = 0 ;i < 5 ;i++){
        for(long long j =0 ;j<5 ;j++){
            cin >> arr[i][j];
        }
    }
    long long i_idx=0;
    long long j_idx=0;
    for(long long i = 0; i< 5 ;i++){
        for(long long j = 0;j<5;j++){
            if(arr[i][j]==1){
                i_idx=i;
                j_idx=j;
            }
        }
    }
    long long moves=abs(i_idx-2);
    long long moves_2=abs(j_idx-2);
    cout << moves+moves_2 << endl;
}