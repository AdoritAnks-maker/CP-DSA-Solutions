#include<bits/stdc++.h>
using namespace std;

int main(){
    long long sq=0;
    long long sum = 0;
    for(long long i =1 ; i<=350000;i++){
        sq=i*i;
        if(sq%2==1){
            sum+=sq;
        }
    }
    cout << sum << endl;

}