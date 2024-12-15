class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n = num.size();
    int carry = k; // Start with k as the carry
    std::vector<int> result;
    
    // Start from the least significant digit (rightmost)
    for (int i = n - 1; i >= 0; --i) {
        carry += num[i];
        result.push_back(carry % 10); // Take the last digit of the sum
        carry /= 10; // Carry is the remaining part
    }
    
    // If there's any carry left, process it
    while (carry > 0) {
          result.push_back(carry % 10);
        carry /= 10;
    }
    
    // Reverse the result to get the correct order
    std::reverse(result.begin(), result.end());
    return result;  
    }
};