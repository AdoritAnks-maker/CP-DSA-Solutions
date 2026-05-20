#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    int freq[256] = {0};
    int maxFreq = 0;

    for(char c : str){
        freq[c]++;
        if(freq[c] > maxFreq){
            maxFreq = freq[c];
        }
    }

    for(int i = 0; i < 256; i++){
        if(freq[i] == maxFreq){
            cout << (char)i << " ";
        }
    }
    cout << endl;
    return 0;
}
