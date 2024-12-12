class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
         std::sort(nums.begin(), nums.end()); // Step 1: Sort the array
    int closestSum = nums[0] + nums[1] + nums[2]; // Initialize closest sum

    for (size_t i = 0; i < nums.size() - 2; ++i) {
        int left = i + 1;
        int right = nums.size() - 1;

        while (left < right) {
            int currentSum = nums[i] + nums[left] + nums[right];

            // Step 5: Update closest sum if necessary
            if (std::abs(currentSum - target) < std::abs(closestSum - target)) {
                closestSum = currentSum;
            }

            // Adjust pointers based on the comparison of currentSum and target
            if (currentSum < target) {
                ++left; // Move left pointer to the right
            } else if (currentSum > target) {
                --right; // Move right pointer to the left
            } else {
                // If currentSum equals target, we've found the closest sum
                return currentSum;
            }
        }
    }

    return closestSum;
    }
};