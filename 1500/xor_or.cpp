#include<bits/stdc++.h>
using namespace std;

int main(){
	string s, t ;
	cin >> s >> t ;
	bool ones = false, onet =  false;
	if(s.size()!=t.size()){
		cout << "NO" << endl;
		return  0 ;
	}
	for(char ch : s){
		if(ch=='1'){
			ones=true;
			break;
		}
	}
	for(char ch : t){
		if(ch=='1'){
			onet=  true;
			break;
		}
	}
	if(ones==onet){
		cout << "YES" << endl ;
	}else{
		cout << "NO" << endl ;
	}
	return 0 ;
}