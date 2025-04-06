class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
      vector<unsigned int> dp(target + 1, 0);
        dp[0] = 1; // base case: one way to make sum 0 (no elements)

        for (int i = 1; i <= target; ++i) {
            for (int num : nums) {
                if (i >= num) {
                    dp[i] += dp[i - num];
                }
            }
        }

        return dp[target];   
    }
};