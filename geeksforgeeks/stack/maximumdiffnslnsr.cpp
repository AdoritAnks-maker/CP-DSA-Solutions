#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> nearestsmallerleft(vector<int> &arr)
    {
        int n = arr.size();
        stack<int> st;
        vector<int> ans;

        for (int i = 0; i < n; i++)
        {
            if (!st.empty() && st.top() < arr[i])
            {
                ans.push_back(st.top());
            }
            else if (!st.empty() && st.top() >= arr[i])
            {
                while (!st.empty() && st.top() >= arr[i])
                {
                    st.pop();
                }
                if (st.empty())
                    ans.push_back(0);
                else
                    ans.push_back(st.top());
            }
            else
            {
                ans.push_back(0);
            }

            st.push(arr[i]);
        }
        return ans;
    }

    vector<int> nearestsmallertoright(vector<int> &arr)
    {
        int n = arr.size();
        stack<int> st;
        vector<int> ans;

        for (int i = n - 1; i >= 0; i--)
        {
            if (!st.empty() && st.top() < arr[i])
            {
                ans.push_back(st.top());
            }
            else if (!st.empty() && st.top() >= arr[i])
            {
                while (!st.empty() && st.top() >= arr[i])
                {
                    st.pop();
                }
                if (st.empty())
                    ans.push_back(0);
                else
                    ans.push_back(st.top());
            }
            else
            {
                ans.push_back(0);
            }

            st.push(arr[i]);
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
    Solution sol;
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> res1 = sol.nearestsmallerleft(arr);
    vector<int> res2 = sol.nearestsmallertoright(arr);
    int max_dff = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        max_dff = max(max_dff, abs(res1[i] - res2[i]));
    }
    cout << max_dff << endl;
}