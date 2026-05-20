#include<bits/stdc++.h>
using namespace std;

#define ll long long

const int N = 10000000;
vector<char> mark(N + 1, false);
vector<long long> primes;


void sieve() {
    for (long long i = 2; i < N; ++i) {
        if (!mark[i]) {                 
            primes.emplace_back(i);     

            
            for (long long j = i * i; j < N; j += i)
                mark[j] = true;
        }
    }
}


long long segmentedSieve(long long L, long long R) {

    vector<char> isPrime(R - L + 1, true);

  
    for (long long i : primes)
    {
        if (i * i > R) break;  

       
        long long start = max(i * i, (L + i - 1) / i * i);

        for (long long j = start; j <= R; j += i)
            isPrime[j - L] = false;
    }

    if (L == 1)
        isPrime[0] = false;

    for(int i = 0; i < isPrime.size(); i++)
        if (isPrime[i])
            return L + i;

    return -1;
}

void solve() {
    long long n;
    cin >> n;

   
    cout << segmentedSieve(n + 1, n + 2000) << endl;
}

int main(){
    sieve();  
    int tc;
    cin >> tc;
    while(tc--) solve();
}