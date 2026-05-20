#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int operations = 0;
        long long currmax=0;
        for(int i  =0 ;i<n;i++){
            if(arr[i]>=currmax){
                operations++;
                currmax=arr[i];
            }
        }

        cout << operations << endl;
    }
    return 0;
}