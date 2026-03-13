#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int sumofmaxsub(vector<int> &arr)
    {
        int n = arr.size();
        stack<int> st;
        int res = 0;
        vector<int> left(n), right(n);
        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && arr[st.top()] <= arr[i])
            {
                st.pop();
            }
            if (st.empty())
            {
                left[i] = i + 1;
            }
            else
            {
                left[i] = i - st.top();
            }
            st.push(i);
        }
        while (!st.empty())
        {
            st.pop();
        }
        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() && arr[st.top()] <= arr[i])
            {
                st.pop();
            }
            if (st.empty())
            {
                right[i] = n - i;
            }
            else
            {
                right[i] = st.top()-i;
            }
            st.push(i);
        }
        for (int i = 0; i < n; i++)
        {
            res += (arr[i] * left[i] * right[i]);
        }
        return res;
    }
};

int main()
{
    Solution Sol;
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = Sol.sumofmaxsub(arr);
    cout << ans << endl;
}