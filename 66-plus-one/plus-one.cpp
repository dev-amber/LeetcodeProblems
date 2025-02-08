class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      int n = digits.size();
    
    for (int i = n - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i] += 1;
            return digits;
        }
        digits[i] = 0;  // Set to 0 and carry to next
    }
    
    // If carry remains, add 1 at the start
    digits.insert(digits.begin(), 1);
    return digits;   
    }
};