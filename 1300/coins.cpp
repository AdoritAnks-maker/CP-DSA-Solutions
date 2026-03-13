#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n ;
    while (n != 0)
    {
        cout << n << " ";
        n /= 2;
    }
    cout << endl;
}