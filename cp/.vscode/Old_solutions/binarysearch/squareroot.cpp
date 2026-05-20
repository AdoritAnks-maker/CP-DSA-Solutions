// #include<bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         int squareroot(long long n){
//             int ans =  0;
//             for(int i=1 ;i<n ;i++){
//                 if((long long)i*i <=n){
//                     ans=i;
//                 }else{
//                     break;
//                 }
//             }
//             return ans;
//         }
// };

// int main(){
//     long long num ;
//     cin >> num ;
//     Solution sol ;
//     cout << sol.squareroot(num) << endl;
// }

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int sqroot(int n){
            int start=1 ;
            int end = n ;
            int ans = 1;
            while(start<=end){
                int mid= start+(end-start)/2;
                if(mid*mid<=n){
                    ans=mid ;
                    start=mid+1;
                }else{
                    end=mid-1;
                }
            }
            return ans ;
        }
};
 
int main(){
    long long num ;
    cin >> num ;
    Solution sol ;
    long long result = sol.sqroot(num);
    cout << result << endl ;
}


