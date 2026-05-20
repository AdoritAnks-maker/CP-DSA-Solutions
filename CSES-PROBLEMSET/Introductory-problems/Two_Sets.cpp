#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long sum = n * (n + 1) / 2;
    if (sum % 2 == 1)
    {
        cout << "NO" << endl;
        return 0;
    }
    long long target_sum = sum / 2;
    vector<int> arr1;
    vector<int> arr2;
    vector<bool> used(n + 1, false);
    for (int i = n; i >= 1; i--)
    {
        if (target_sum >= i)  
        {
            arr1.push_back(i);
            target_sum -= i;   
            used[i] = true;    
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (!used[i])
        {
            arr2.push_back(i);
        }
    }
    cout << "YES" << endl;
    cout << arr1.size() << endl;
    for (auto x : arr1)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << arr2.size() << endl;
    for (auto z : arr2)
    {
        cout << z << " ";
    }
}