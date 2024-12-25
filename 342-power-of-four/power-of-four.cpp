class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n > 0 && (n & (n - 1)) == 0) {
            // Check if the set bit is at an even position
            // This is done by verifying that n & 0x55555555 is non-zero
            return (n & 0x55555555) != 0;
        }
        return false;
    }
};