#include <bits/stdc++.h>
using namespace std;

int printfact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * printfact(n - 1);
}

int main()
{
    int n;
    cin >> n;
    printfact(n);
    cout << printfact(n) << endl;
}