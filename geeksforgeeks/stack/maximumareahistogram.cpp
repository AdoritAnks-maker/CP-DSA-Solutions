#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> nsl(vector<int> &arr)
    {
        int n = arr.size();
        vector<int> ans;
        stack<pair<int, int>> st;
        for (int i = 0; i < n; i++)
        {
            if (st.empty())
            {
                ans.push_back(-1);
            }
            else if (!st.empty() && st.top().first < arr[i])
            {
                ans.push_back(st.top().second);
            }
            else if (!st.empty() && st.top().first >= arr[i])
            {
                while (!st.empty() && st.top().first >= arr[i])
                {
                    st.pop();
                }
                if (st.empty())
                {
                    ans.push_back(-1);
                }
                else
                {
                    ans.push_back(st.top().second);
                }
            }
            st.push({arr[i], i});
        }
        return ans;
    }
    vector<int> nsr(vector<int> &arr)
    {
        int n = arr.size();
        stack<pair<int, int>> st;
        vector<int> ans;
        for (int i = n - 1; i >= 0; i--)
        {
            if (st.empty())
            {
                ans.push_back(n);
            }
            else if (!st.empty() && st.top().first < arr[i])
            {
                ans.push_back(st.top().second);
            }
            else if (!st.empty() && st.top().first >= arr[i])
            {
                while (!st.empty() && st.top().first >= arr[i])
                {
                    st.pop();
                }
                if (st.empty())
                {
                    ans.push_back(n);
                }
                else
                {
                    ans.push_back(st.top().second);
                }
            }
            st.push({arr[i], i});
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    int getMaxArea(vector<int> &arr)
    {
        int n = arr.size();
        vector<int> left = nsl(arr);
        vector<int> right = nsr(arr);
        vector<int> width(n);
        for (int i = 0; i < n; i++)
        {
            width[i] = abs(right[i] - left[i] - 1);
        }
        int mx_area = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            mx_area = max(mx_area, width[i] * arr[i]);
        }
        return mx_area;
    }
};

int main()
{
    Solution sol;
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maximumarr = sol.getMaxArea(arr);
    cout << maximumarr << endl;
}