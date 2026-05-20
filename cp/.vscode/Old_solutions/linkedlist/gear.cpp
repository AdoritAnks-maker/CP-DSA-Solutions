#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin >> n ;
    vector<int>arr(n);
    for(int i = 0 ;i< n ;i++){
        cin >> arr[i];
    }
    int m ;
    cin >> m;
    vector<int>nums(m);
    for(int i = 0;i<m;i++){
        cin >> nums[i];
    }
    int count =0 ;
    int max_ratio =1 ;

    for(int i =0 ;i< n ;i++){
        for(int j =0 ;j< m ;j++){
            if(nums[j]%arr[i]==0){
                int ratio = nums[j]/arr[i];

                if(ratio>max_ratio){
                    max_ratio=ratio;
                    count =1 ;
                }
                else if(ratio==max_ratio){
                    count++;
                }
            }
        }
    }
    cout << count << endl;

}