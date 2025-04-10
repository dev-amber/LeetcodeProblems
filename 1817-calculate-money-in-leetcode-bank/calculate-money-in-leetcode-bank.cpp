class Solution {
public:
    int totalMoney(int n) {
          int weeks = n / 7;
        int days = n % 7;
        
        // Total money from full weeks
        int total = 7 * weeks * (weeks - 1) / 2 + 28 * weeks;
        
        // Add remaining days
        for (int i = 0; i < days; ++i) {
            total += weeks + i + 1;
        }
        
        return total;  
    }
};