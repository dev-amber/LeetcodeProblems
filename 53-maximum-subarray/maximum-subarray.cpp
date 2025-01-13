class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int max_sum = INT_MIN; // Initialize to the smallest integer
    int current_sum = 0;

    for (int num : nums) {
        current_sum += num;          // Add the current number to the sum
        max_sum = std::max(max_sum, current_sum); // Update max_sum if current_sum is larger
        if (current_sum < 0) {       // Reset current_sum if it goes negative
            current_sum = 0;
        }
    }

    return max_sum;  
    }
};