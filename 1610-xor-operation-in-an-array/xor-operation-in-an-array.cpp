class Solution {
public:
    int xorOperation(int n, int start) {
      int result = 0; // Initialize result as 0
    for (int i = 0; i < n; ++i) {
        result ^= (start + 2 * i); // Compute XOR on-the-fly
    }
    return result;  
    }
};