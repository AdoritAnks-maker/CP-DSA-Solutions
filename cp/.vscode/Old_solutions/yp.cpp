#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n ;
    cin >> n ;
    long long x , y , z ;
    long long sum_x=0;
    long long sum_y=0;
    long long sum_z=0;
    for(long long i = 0 ;i < n ;i++){
        cin >> x >> y >> z ;
        sum_x+=x;
        sum_y+=y;
        sum_z+=z;
    }
    if(sum_x==0 && sum_y==0 && sum_z==0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}