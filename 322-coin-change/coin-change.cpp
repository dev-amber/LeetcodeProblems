class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
         vector<int> dp(amount + 1, amount + 1);
        dp[0] = 0;

        // Loop through all amounts from 1 to amount
        for (int i = 1; i <= amount; ++i) {
            for (int coin : coins) {
                if (i >= coin) {
                    dp[i] = min(dp[i], dp[i - coin] + 1);
                }
            }
        }

        // Check if it's possible to make the amount
        return dp[amount] > amount ? -1 : dp[amount];
    }
};