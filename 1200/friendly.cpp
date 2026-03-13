#include <bits/stdc++.h>
using namespace std;

long long sumdigits(long long num)
{
    long long sum = 0;
    while (num != 0)
    {
        sum += (num % 10);
        num /= 10;
    }
    return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        long long x;
        cin >> x;

        if(x%9==0){
            cout << 10 << endl;
        }else{
            cout << 0 << endl;
        }
        
    }
}
