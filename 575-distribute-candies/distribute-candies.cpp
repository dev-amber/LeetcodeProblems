class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
      unordered_set<int> uniqueCandies(candyType.begin(), candyType.end());
    
    // Step 2: Compare number of unique candy types with n / 2
    int n = candyType.size();
    int uniqueCount = uniqueCandies.size();
    
    // The result is the minimum of unique candy types and n / 2
    return min(uniqueCount, n / 2);  
    }
};