#include<bits/stdC++.h>
using namespace std;

class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();
        map<int , int>freq;
        for(int i = 0;i<n ;i++){
            freq[arr[i]]++;
        }
        int elm=-1;
        for(int i = 0;i<n ;i++){
            if(freq[arr[i]]>n/2){
                elm=arr[i];
            }
        }
        return elm;
    }
};