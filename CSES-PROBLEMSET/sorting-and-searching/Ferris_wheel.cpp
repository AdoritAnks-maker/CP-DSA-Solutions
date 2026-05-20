#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long x;
    cin >> x;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    long long left = 0;
    long long right = n - 1;
    long long count = 0;
    while (left <= right)
    {
        long long sum = arr[left] + arr[right];
        if (sum <= x)
        {
            left++;
            right--;
        }else{
            right--;
        }
        count++;
    }
    cout << count << endl;
}