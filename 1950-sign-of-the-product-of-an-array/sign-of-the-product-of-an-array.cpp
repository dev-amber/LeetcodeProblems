class Solution {
public:
    int arraySign(vector<int>& nums) {
         int negativeCount = 0;
        for (int num : nums) {
            if (num == 0) {
                return 0; // Product is zero if any element is zero.
            }
            if (num < 0) {
                negativeCount++; // Count negative numbers.
            }
        }
        // If the count of negative numbers is odd, product is negative.
        // If even, product is positive.
        return (negativeCount % 2 == 0) ? 1 : -1;
    }
};