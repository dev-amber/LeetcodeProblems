class Solution {
public:
    string triangleType(vector<int>& nums) {
         sort(nums.begin(), nums.end());
        
        int a = nums[0], b = nums[1], c = nums[2];
        
        // Check if it forms a valid triangle
        if (a + b <= c) {
            return "none";
        }
        
        // Now check types
        if (a == b && b == c) {
            return "equilateral";
        } else if (a == b || b == c || a == c) {
            return "isosceles";
        } else {
            return "scalene";
        }
    }
};