class Solution {
public:
    int divide(int dividend, int divisor) {
         // Handle special cases
        if (dividend == 0) return 0;
        if (divisor == 1) return dividend;
        if (divisor == -1) {
            if (dividend > INT_MIN) return -dividend;
            return INT_MAX; // Overflow case
        }
        
        // Determine the sign of the result
        bool negative = (dividend < 0) ^ (divisor < 0);
        
        // Use absolute values
        long long absDividend = abs((long long)dividend);
        long long absDivisor = abs((long long)divisor);
        
        long long quotient = 0;
        
        // Bitwise division
        while (absDividend >= absDivisor) {
            long long temp = absDivisor, multiple = 1;
            while (absDividend >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            absDividend -= temp;
            quotient += multiple;
        }
        
        // Apply the sign to the result
        if (negative) quotient = -quotient;
        
        // Handle overflow
        if (quotient > INT_MAX) return INT_MAX;
        if (quotient < INT_MIN) return INT_MIN;
        
        return quotient;
    }
    
};