class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
       vector<string> result;
    int n = nums.size();
    if (n == 0) return result;  // If the array is empty, return an empty result.

    int start = 0;  // Start of the current range.

    for (int i = 0; i < n; ++i) {
        // If it's the last element or the next element is not consecutive.
        if (i == n - 1 || nums[i] + 1 != nums[i + 1]) {
            if (start == i) {
                // Single number range.
                result.push_back(to_string(nums[start]));
            } else {
                // Range with more than one number.
                result.push_back(to_string(nums[start]) + "->" + to_string(nums[i]));
            }
            start = i + 1;  // Update the start for the next range.
        }
    }

    return result; 
    }
};