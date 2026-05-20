#include<bits/stdc++.h>
using namespace std;

int  main(){
    int t ;
    cin >> t ;
    while(t--){
        long long n  ;
        cin >> n ;
        long long block=1;
        long long total=5;
        string people[]={"Sheldon","Leonard" ,"Penny","Rajesh","Howard"};
        while(n>5*block){
            n-=5*block;
            block*=2;
        }
        long long index =(n-1)/block ;
        cout << people[index] << endl;


    }
    return 0;
}