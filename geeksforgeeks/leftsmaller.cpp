#include <bits/stdC++.h>
using namespace std;

class Solution
{
public:
    vector<int> left_diff(vector<int> &nums)
    {
        stack<int> st;
        vector<int> arr;
        for (int i = 0; i < nums.size(); i++)
        {
            if (st.empty())
            {
                arr.push_back(0);
            }
            else if (!st.empty() && st.top() < nums[i])
            {
                arr.push_back(st.top());
            }
            else if (!st.empty() && st.top() >= nums[i])
            {
                while (!st.empty() && st.top() >= nums[i])
                {
                    st.pop();
                }
                if (st.empty())
                {
                    arr.push_back(0);
                }
                else
                {
                    arr.push_back(st.top());
                }
            }
            st.push(arr[i]);
        }
        return arr;
    }
    vector<int> rightdiff(vector<int> &nums)
    {
        int n = nums.size();
        stack<int> st;
        vector<int> res;
        for (int i = n - 1; i >= 0; i--)
        {
            if (st.empty())
            {
                res.push_back(0);
            }
            else if (!st.empty() && st.top() < nums[i])
            {
                res.push_back(st.top());
            }
            else if (!st.empty() && st.top() >= nums[i])
            {
                while (!st.empty() && st.top() >= nums[i])
                {
                    st.pop();
                }
                if (st.empty())
                {
                    res.push_back(0);
                }
                else
                {
                    res.push_back(st.top());
                }
            }
            st.push(nums[i]);
        }
        reverse(res.begin() ,res.end());
        return res;
    }
};

int main(){
    Solution sol;
    vector<int>nums = {2,4,8,7,9,9,3};
    vector<int>left = sol.left_diff(nums);
    vector<int>right=sol.rightdiff(nums);
    vector<int>res;
    for(int i = 0 ;i<left.size() ;i++){
        res.push_back(abs(left[i]-right[i]));
    }
    for(auto x : res){
        cout << x <<  " ";
    }
    cout << endl;
}

