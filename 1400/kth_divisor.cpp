#include<bits/stdc++.h>
using namespace std;
bool checkprime(long long num){
	for(long long i = 2 ; i*i<=num; i++){
		if(num%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	long long n, k;
	cin >> n >> k ;
	if(checkprime(n)){
		cout <<"-1" << endl ;
		return 0 ;
	}
}