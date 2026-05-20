#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<char> arr;
    long long sum = 0;

    for(int i = 0; i < s.size(); i++){
        arr.push_back(s[i]);
    }

    for(auto x : arr){
        sum += x - '0';
    }

    cout << sum << endl;
    return 0;
}
