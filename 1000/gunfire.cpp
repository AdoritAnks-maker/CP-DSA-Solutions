#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin >> tc;
    
    while (tc--) {
        long long n, h, k;
        cin >> n >> h >> k;
        
        vector<long long> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
     
        long long max_elm = *max_element(arr.begin(), arr.end());
        int idx1 = -1;
        for (int i = 0; i < n; i++) {
            if (arr[i] == max_elm) {
                idx1 = i;
                break;
            }
        }
        
        int idx2 = -1;
        if (idx1 > 0) {
            long long min_elm = *min_element(arr.begin(), arr.begin() + idx1);
            for (int i = 0; i < idx1; i++) {
                if (arr[i] == min_elm) {
                    idx2 = i;
                    break;
                }
            }
        }
        
        if (idx1 != -1 && idx2 != -1) {
            swap(arr[idx1], arr[idx2]); 
        }
        
        long long score = 0;
        long long i = 0;
        
        while (h > 0) {
            h -= arr[i];           
            score++;
            i++;
            
            if (i == n) {          
                i = 0;
                if(h>0)score += k;
            }
        }
        
        cout << score << endl ;
    }
    return 0;
}
