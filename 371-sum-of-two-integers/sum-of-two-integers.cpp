class Solution {
public:
    int getSum(int a, int b) {
         while (b != 0) { 
            // Calculate carry
            int carry = (a & b) << 1;
            // XOR to find sum without carry
            a = a ^ b;
            // Update b with the carry
            b = carry;
        }
        return a;
    }
};