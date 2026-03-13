#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isSubset(vector<int> &a, vector<int> &b)
    {
        map<int, int> freq1;
        for (auto x : b)
        {
            freq1[x]++;
        }
        map<int, int> freq2;
        for (auto y : a)
        {
            freq2[y]++;
        }
        for (auto v : b){
            if(freq2[v]<freq1[v]){
                return false;
            }
        }
        return true ;
    }
};