class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (int num : nums) {
            // Count the digits using a helper function
            if (countDigits(num) % 2 == 0) {
                count++;
            }
        }
        return count;
    }

private:
    int countDigits(int num) {
        int digits = 0;
        while (num > 0) {
            num /= 10;
            digits++;
        }
        return digits; 
        
    }
};