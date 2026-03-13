#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<bool> is_prime(n + 1, true);
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (is_prime[i])
//         {
//             for (int j = i * i; j <= n; j += i)
//             {
//                 is_prime[j] = false;
//             }
//         }
//     }
//     for(int i   = 2 ;i<= n ;i++){
//         if(is_prime[i]){
//             cout << i << " ";
//         }
//     }

//     return 0;
// }



class Solution{
    public:
    vector<bool>segmentedsieve(long long l , long long r){
        long long limit=  sqrt(r);
        vector<bool>mark(limit+1 , false);
        vector<long long>primes;
        for(long long i =2 ;i<=limit ;i++){
            if(!mark[i]){
                primes.emplace_back(i);
                for(long long j = i*i;j<= limit;j+=i){
                    mark[j]=true;
                }
            }
        }
        vector<bool>isprime(r-l+1 , true);
        for(long long i : primes){
            for(long long j = max(i*i , (l+i-1)/i*i) ; j<= r ;j+=i){
                isprime[j-l]=false;
            }
            if(l==1){
                isprime[0]=false;
            }
        }
        return isprime;
    }

};

int main(){
    int l ,r ;
    cin >> l >> r;
    Solution sol ;
    vector<bool>result=sol.segmentedsieve(l , r);
    for(int i = l ;i<=r ;i++){
        if(result[i-l]){
            cout << i <<" ";
        }
    }

}