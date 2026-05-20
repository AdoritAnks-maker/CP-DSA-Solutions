// // #include <bits/stdc++.h>
// // using namespace std;

// // class Solution
// // {
// // public:
// //     int operations(vector<int> &nums)
// //     {
// //         if (is_sorted(nums.begin(), nums.end()))
// //             return 0;
// //         if (nums.size() == 2)
// //             return 1;

// //         int idx = 0;
// //         int mn = *min_element(nums.begin(), nums.end());
// //         if(is_sorted(nums.begin() , nums.end()-1) && nums[nums.size()-1]==mn){
// //             return 1;
// //         }
// //         for (int i = 0; i < nums.size(); i++)
// //         {
// //             if (nums[i] == mn)  
// //             {
// //                 idx = i;
// //                 break;
// //             }
// //         }

// //         if (idx + 1 < nums.size() &&
// //             is_sorted(nums.begin(), nums.begin() + idx) &&
// //             is_sorted(nums.begin() + idx + 1, nums.end()))
// //         {
// //             return nums.size()-idx;
// //         }

// //         return -1;
// //     }
// // };

// // int main()
// // {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);

// //     int n;
// //     cin >> n;
// //     Solution sol;
// //     vector<int> arr(n);
// //     for (int i = 0; i < n; i++)
// //     {
// //         cin >> arr[i];
// //     }
// //     int result = sol.operations(arr);
// //     cout << result << endl;
// // }


// #include <bits/stdc++.h>
// using namespace std;

// class Solution
// {
// public:
//     int operations(vector<int> &nums)
//     {
//         if (is_sorted(nums.begin(), nums.end()))
//             return 0;

//         int n = nums.size();
//         // Operation: move last element to the front. Find min k such that
//         // [nums[n-k], ..., nums[n-1], nums[0], ..., nums[n-k-1]] is sorted.
//         for (int k = 1; k <= n; k++)
//         {
//             // Rotated array is sorted iff:
//             // 1) last k elements are sorted, 2) first n-k elements are sorted, 3) wrap: nums[n-1] <= nums[0]
//             if (k < n && nums[n - 1] > nums[0])
//                 continue; // wrap condition fails
//             bool ok = true;
//             for (int i = n - k; i + 1 < n && ok; i++)
//                 if (nums[i] > nums[i + 1])
//                     ok = false;
//             for (int i = 0; i + 1 < n - k && ok; i++)
//                 if (nums[i] > nums[i + 1])
//                     ok = false;
//             if (ok)
//                 return k;
//         }
//         return -1;
//     }
// };

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;
//     Solution sol;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int result = sol.operations(arr);
//     cout << result << endl;
// }


#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int operations(vector<int> &nums)
    {
        if (is_sorted(nums.begin(), nums.end()))
            return 0;

        int n = nums.size();
        // Rotated array is sorted iff there's at most one "drop" in circular order (nums[i] > nums[i+1]).
        // If exactly one drop at j, then k = n - j - 1.
        int drop = -1;
        for (int i = 0; i < n; i++)
        {
            int j = (i + 1) % n;
            if (nums[i] > nums[j])
            {
                if (drop != -1)
                    return -1; // more than one drop
                drop = i;
            }
        }
        return drop == -1 ? 0 : n - drop - 1;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    Solution sol;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int result = sol.operations(arr);
    cout << result << endl;
}