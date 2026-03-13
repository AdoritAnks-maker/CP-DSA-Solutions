// #include<bits/stdc++.h>
// using namespace std;

// class Solution {
//   public:
//     int closing(string s, int pos) {
//         stack<char>st;
//         int idx  =-1;
//         for(int i = 0 ;i<s.size() ;i++){
//             if(s[i]=='['){
//                 st.push(i);
//             }else if(st.top()!=pos){
//                 while(!st.empty() && st.top()!=pos){
//                     st.pop();
//                 }if(st.empty()){
//                     idx =-1;
//                 }else{
//                     idx=i;
//                 }
//             }
//         }
//         return idx ;
//     }
// };

// int main(){
//     Solution sol ;
//     string s = "[ABC[23]][89]" ;
//     int pos = 0 ;
//     int ans = sol . closing(s , pos);
//     cout << ans << endl ;
// }

