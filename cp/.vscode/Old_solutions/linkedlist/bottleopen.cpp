#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n;
    cin >>n ;
    vector<pair<int , int>>bottle(n) ;
    int count  =0;
    for(int i = 0; i<n ;i++){
        cin >> bottle[i].first >> bottle[i].second ;
        if(bottle[i].first==bottle[i].second)count++;
    }
    cout << count << endl ;

}