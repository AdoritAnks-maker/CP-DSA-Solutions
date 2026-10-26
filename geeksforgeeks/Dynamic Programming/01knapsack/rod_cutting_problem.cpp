#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	int cutRod(vector<int> &price) {
		int n = price.size();
		int capacity = n;
		vector<vector<int>> dp(n + 1, vector<int>(capacity + 1));
		for (int i = 0; i<n + 1; i++) {
			for (int j = 0; j<capacity + 1; j++) {
				if (i == 0 || j == 0) {
					dp[i][j] = 0;
				}
			}
		}
		for (int i = 1; i<n + 1; i++) {
			for (int j = 1; j<capacity + 1; j++) {
				int len = i ;
				if (len <= j) {
					dp[i][j] = max(price[i - 1]+dp[i][j - len], dp[i - 1][j]);
				} else {
					dp[i][j] = dp[i - 1][j];
				}
			}
		}
		return dp[n][capacity];
	}
};
