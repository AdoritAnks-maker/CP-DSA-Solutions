#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin()  , arr.end());
    long long sum = 0;
    long long ans  =  INT_MIN;
    for(int i = 0; i<k ;i++){
        sum+=arr[i];
    }
    ans=max(ans, sum);
    
}