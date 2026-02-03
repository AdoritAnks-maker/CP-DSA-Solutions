#include <bits/stdc++.h>
using namespace std;

double areaadd(vector<int> &nums)
{
    int n = nums.size();
    double arre = 0;
    for (int i = 0; i < nums.size(); i += 2)
    {
        arre += (3.1415926536 * nums[i] * nums[i]);
    }
    return arre;
}
double arreremove(vector<int> &nums)
{
    double res = 0;
    for (int i = 1; i < nums.size(); i += 2)
    {
        res += (3.1415926536 * nums[i] * nums[i]);
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end(), greater<int>());
    long double addare = areaadd(arr);
    long double subarea = arreremove(arr);
    long double res = addare - subarea;
    cout << res << setprecision(10) << endl;
}