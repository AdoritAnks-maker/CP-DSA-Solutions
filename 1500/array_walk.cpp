#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_Stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int best_idx =-1;
        for(int i  = 1 ;i<k+1 ;i++){
            if(arr[i-1] > arr[i]){
                best_idx= 
            }
        }
    }
}