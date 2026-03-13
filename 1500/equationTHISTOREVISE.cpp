#include <bits/stdc++.h>
using namespace std;

long long powerX(long long num, long long a)
{
    long long ans = 1;
    for (long long i = 1; i <= a; i++)
    {
        ans = ans * num;
    }
    return ans;
}
long long sumX(long long num)
{
    long long sum = 0;
    while (num)
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

    long long a, b, c;
    cin >> a >> b >> c;
    vector<long long> ans;
    for (int x = 1; x <= 81; x++)
    {
        long long res = b * powerX(x, a) + c;
        if (res > 0 && res < 1000000000 && sumX(res) == x)
        {
            ans.push_back(res);
        }
    }
    cout << ans.size() << endl;
    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
}