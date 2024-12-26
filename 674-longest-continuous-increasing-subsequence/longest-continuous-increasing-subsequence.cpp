class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
      if (nums.empty()) return 0;

    int maxLength = 1; // At least one element means length is 1
    int currentLength = 1;

    for (size_t i = 1; i < nums.size(); ++i) {
        if (nums[i] > nums[i - 1]) {
            currentLength++; // Extend the current sequence
        } else {
            currentLength = 1; // Reset for a new sequence
        }
        maxLength = max(maxLength, currentLength); // Update max length
    }

    return maxLength;  
    }
};