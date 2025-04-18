class Solution {
public:
    int minDistance(string word1, string word2) {
     int m = word1.size();
    int n = word2.size();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    // Initialize the base cases
    for (int i = 0; i <= m; i++) dp[i][0] = i;  // Deletions
    for (int j = 0; j <= n; j++) dp[0][j] = j;  // Insertions

    // Fill the DP table
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (word1[i - 1] == word2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1];  // No operation needed
            } else {
                dp[i][j] = min({dp[i - 1][j] + 1,    // Delete
                                dp[i][j - 1] + 1,    // Insert
                                dp[i - 1][j - 1] + 1 // Replace
                               });
            }
        }
    }
    return dp[m][n];   
    }
};