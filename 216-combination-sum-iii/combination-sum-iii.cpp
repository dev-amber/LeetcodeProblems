class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
      vector<vector<int>> result;
        vector<int> combination;
        backtrack(result, combination, k, n, 1);
        return result;
    }

private:
    void backtrack(vector<vector<int>>& result, vector<int>& combination, int k, int n, int start) {
        // Base case: if the combination is of the required size and sums up to n
        if (combination.size() == k && n == 0) {
            result.push_back(combination);
            return;
        }
        // Base case: if the combination is of the required size or sum is exceeded
        if (combination.size() >= k || n <= 0) {
            return;
        }
        
        // Explore numbers from 'start' to 9
        for (int i = start; i <= 9; ++i) {
            combination.push_back(i); // Choose the number
            backtrack(result, combination, k, n - i, i + 1); // Recurse with updated parameters
            combination.pop_back(); // Unchoose the number
        }
    }
};