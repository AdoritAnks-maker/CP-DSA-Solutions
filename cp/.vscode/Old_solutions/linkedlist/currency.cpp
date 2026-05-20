// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s ;
//     cin >> s ;
//     string max_num="";
//     for(int i = 0 ;i<s.size();i++){
//         if((s[i]-'0')%2==0){
//             string t = s ;
//             swap(t[i], t[s.size()-1]);
//             if(max_num=="" || t>max_num){
//                 max_num=t;
//             }
//         }
//     }
//     if(max_num=="")cout << -1 << endl;
//     else{
//         cout << max_num << endl;
//     }
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s ;
    cin >> s ;
    int n = s.size();
    int swap_pos=-1;
    for(int i= 0;i<n ;i++){
        int digit=s[i]-'0';
        if(digit%2==0){
            swap_pos=i;
            if(s[i]<(s[n-1]-'0')){
                swap(s[i],  s[n-1]);
                cout << s << endl ;
                return 0;
            }
        }
    }
    if(swap_pos==-1){
        cout << -1 << endl ;
    }
    else{
        swap(s[swap_pos], s[n-1]);
        cout << s << endl ;
    }
}