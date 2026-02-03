// #include <bits/stdc++.h>
// using namespace std;

// long long powerx(long long x, long long a)
// {
//     long long ans = 1;
//     for (int i = 1; i <= a; i++)
//     {
//         ans = ans * x;
//     }
//     return ans;
// }
// long long sx(long long x)
// {
//     long long sum = 0;
//     while (x != 0)
//     {
//         sum += x % 10;
//         x /= 10;
//     }
//     return sum;
// }

// int main()
// {
//     int a, b, c;
//     cin >> a >> b >> c;
//     vector<long long> numbers;
//     int count = 0;
//     for (int x = 1; x <=81; x++)
//     {
//         long long res = b * powerx(x, a) + c;
//         if (res > 0 && sx(res)==x)
//         {
//             count++;
//             numbers.push_back(res);
//         }
//     }
//     if (count == 0)
//     {
//         cout << count << endl;
//         return 0;
//     }
//     cout << count << endl;
//     for (auto x : numbers)
//     {
//         cout << x << " ";
//     }
//     cout << endl;
// }



#include <bits/stdc++.h>
using namespace std;

long long powerx(long long x, long long a)
{
    long long ans = 1;
    for (int i = 1; i <= a; i++)
        ans *= x;
    return ans;
}

long long sx(long long x)
{
    long long sum = 0;
    while (x)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    vector<long long> numbers;

    for (int x = 1; x <= 81; x++)   // 🔥 FIXED HERE
    {
        long long res = b * powerx(x, a) + c;

        if (res > 0 && res < 1000000000 && sx(res) == x)
        {
            numbers.push_back(res);
        }
    }

    cout << numbers.size() << endl;
    for (auto v : numbers)
        cout << v << " ";
    cout << endl;

    return 0;
}
