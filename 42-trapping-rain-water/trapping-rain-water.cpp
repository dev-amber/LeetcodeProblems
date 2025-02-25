class Solution {
public:
    int trap(vector<int>& height) {
            if (height.empty()) return 0; // Edge case: empty array

        int left = 0, right = height.size() - 1;
        int leftMax = 0, rightMax = 0, waterTrapped = 0;

        while (left < right) {
            if (height[left] < height[right]) {
                if (height[left] >= leftMax) {
                    leftMax = height[left];  // Update leftMax
                } else {
                    waterTrapped += leftMax - height[left]; // Trap water
                }
                left++;  // Move left pointer
            } else {
                if (height[right] >= rightMax) {
                    rightMax = height[right];  // Update rightMax
                } else {
                    waterTrapped += rightMax - height[right]; // Trap water
                }
                right--; // Move right pointer
            }
        }
        return waterTrapped;
    }
};