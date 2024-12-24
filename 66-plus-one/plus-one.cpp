class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
         int n = digits.size();
    
    // Traverse the array from the end (least significant digit) to the beginning
    for (int i = n - 1; i >= 0; --i) {
        if (digits[i] < 9) {
            // If the current digit is less than 9, simply increment it and return the array
            digits[i]++;
            return digits;
        }
        // If the current digit is 9, set it to 0 and continue to the next more significant digit
        digits[i] = 0;
    }
    
    // If we finished the loop, all digits were 9, so we need to add a leading 1
    digits.insert(digits.begin(), 1);
    
    return digits;
    }
};