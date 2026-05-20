#include <bits/stdc++.h>
using namespace std;

class Solutipn
{
public:
    vector<int> prevlargelement(vector<int> &arr)
    {
        int n = arr.size();
        vector<int> nums;
        stack<int> s;
        for (int i = 0; i < n; i++)
        {
            if (s.size() == 0)
            {
                nums.push_back(-1);
            }
            else if (s.size() > 0 && s.top() > arr[i])
            {
                nums.push_back(s.top());
            }
            else if (s.size() > 0 && s.top() <= arr[i])
            {
                while (s.size() > 0 && s.top() <= arr[i])
                {
                    s.pop();
                }
                if (s.size() == 0)
                {
                    nums.push_back(-1);
                }
                else
                {
                    nums.push_back(s.top());
                }
            }
            s.push(arr[i]);
        }
        return nums;
    }
};