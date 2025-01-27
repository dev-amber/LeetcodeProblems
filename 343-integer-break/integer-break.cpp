class Solution {
public:
    int integerBreak(int n) {
        if (n <= 2) return 1; // Special case for n=2.
    vector<int> dp(n + 1, 0);
    dp[1] = 0; // Cannot split 1.
    dp[2] = 1; // Only split is 1 + 1.

    for (int i = 3; i <= n; ++i) {
        for (int j = 1; j < i; ++j) {
            dp[i] = max(dp[i], max(j * (i - j), j * dp[i - j]));
        }
    }
      return dp[n];
    }
};