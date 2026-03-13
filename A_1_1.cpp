#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int test = 0; test < t; test++) {
        int n;
        string s;
        cin >> n >> s;
        
        // Count total ones
        int total_ones = 0;
        for(char c : s) {
            if(c == '1') total_ones++;
        }
        
        // Max is always total_ones
        int max_ones = total_ones;
        
        // Min: process groups of consecutive 1s
        int min_ones = total_ones;
        int i = 0;
        while(i < n) {
            if(s[i] == '1') {
                // Find group length
                int start = i;
                while(i < n && s[i] == '1') {
                    i++;
                }
                int length = i - start;
                if(length >= 3) {
                    // Can reduce by length-2
                    min_ones = min(min_ones, total_ones - (length - 2));
                }
            } else {
                i++;
            }
        }
        
        cout << min_ones << " " << max_ones << endl;
    }
    return 0;
}
