class Solution {
public:
    int dominantIndex(vector<int>& nums) {
       int maxIndex = 0; // Index of the largest element
    int maxVal = nums[0]; // Largest value
    
    // Step 1: Find the maximum element and its index
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > maxVal) {
            maxVal = nums[i];
            maxIndex = i;
        }
    }
    
    // Step 2: Check if the max value is at least twice every other element
    for (int i = 0; i < nums.size(); i++) {
        if (i != maxIndex && maxVal < 2 * nums[i]) {
            return -1; // Condition fails
        }
    }
    
    // Step 3: Return the index of the largest element
    return maxIndex; 
    }
};