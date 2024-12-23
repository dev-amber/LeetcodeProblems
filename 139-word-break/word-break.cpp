class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        std::unordered_set<std::string> wordSet(wordDict.begin(), wordDict.end());
    
    // Initialize the dp array
    std::vector<bool> dp(s.length() + 1, false);
    dp[0] = true; // Empty string can be segmented

    // Iterate through the string
    for (int i = 1; i <= s.length(); ++i) {
        for (int j = 0; j < i; ++j) {
            // Check if s[j:i] is in wordDict and dp[j] is true
            if (dp[j] && wordSet.find(s.substr(j, i - j)) != wordSet.end()) {
                dp[i] = true;
                break; // No need to check further if true
            }
        }
    }
    
    return dp[s.length()]; 
    }
};