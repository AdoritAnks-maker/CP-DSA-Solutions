#include <bits/stdc++.h>
using namespace std;

const int maxz = 200000;
int summ(int x)
{
    int sum = 0;
    while (x)
    {
        sum += (x % 10);
        x /= 10;
    }
    return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> res(maxz);
    for (int i = 1; i <= maxz; i++)
    {
        res[i] = res[i-1] + summ(i);
    }
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long n;
        cin >> n;

        cout << res[n] << endl;
    }
    return 0;
}