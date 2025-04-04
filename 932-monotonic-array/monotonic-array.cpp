class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
       bool isIncreasing = true;
    bool isDecreasing = true;

    for (int i = 0; i < nums.size() - 1; ++i) {
        if (nums[i] > nums[i + 1]) {
            isIncreasing = false;
        }
        if (nums[i] < nums[i + 1]) {
            isDecreasing = false;
        }
    }

    return isIncreasing || isDecreasing;  
    }
};