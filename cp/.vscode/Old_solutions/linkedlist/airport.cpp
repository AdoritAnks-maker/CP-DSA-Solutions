#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , m ;
    cin >> n >>m ;
    vector<int>seats(m);
    for(int i = 0;i<m; i++){
        cin >> seats[i];
    }
    int  max_sum=0;
    int min_sum=0;
    int count  = 0 ;
    while(count<m){
        for(int i = 0;i< m;i++){
            if(seats[i]>0){
                max_sum+=seats[i];
                seats[i]--;
                count++;
            }
            if(count==m)break;
        }
    }
    cout << max_sum << endl ;
}