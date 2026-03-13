// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int tc;
//     cin >> tc;
//     while (tc--)
//     {
//         int n;
//         cin >> n;
//         vector<int> arr(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         if (n <= 2)
//         {
//             cout << -1 << endl;
//             continue;
//         }

//         int mxem = *max_element(arr.begin(), arr.end());
//         int mnem = *min_element(arr.begin(), arr.end());
//         int left = 0;
//         int right = n - 1;
//         bool found = false;
//         while (left < right)
//         {
//             if (arr[left] != mxem && arr[left] != mnem && arr[right] != mxem && arr[right] != mnem)
//             {
//                 cout << left + 1 << " " << right + 1 << endl;
//                 found = true;
//                 break;
//             }
//             if (arr[left] == mxem || arr[left] == mnem)
//                 left++;
//             if (arr[right] == mxem || arr[right] == mnem)
//                 right--;
//         }
//         if (!found)
//         {
//             cout << -1 << endl;
//         }
//     }
//     return 0;
// }

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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int mx = n;
        int mn = 1;
        int left = 0;
        int right = n - 1;
        while (left < right)
        {
            if (arr[left] == mn)
            {
                left++;
                mn++;
            }
            else if (arr[left] == mx)
            {
                mx--;
                left++;
            }
            else if (arr[right] == mn)
            {
                right--;
                mn++;
            }
            else if (arr[right] == mx)
            {
                right--;
                mx--;
            }
            else
            {
                break;
            }
        }
        if (left < right)
        {
            cout << left + 1 << " " << right + 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}