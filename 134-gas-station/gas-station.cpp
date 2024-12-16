#include <vector>

class Solution {
public:
    int canCompleteCircuit(const std::vector<int>& gas, const std::vector<int>& cost) {
        int n = gas.size();
        int totalTank = 0;
        int currentTank = 0;
        int startIndex = 0;
        
        for (int i = 0; i < n; ++i) {
            totalTank += gas[i] - cost[i];
            currentTank += gas[i] - cost[i];
            
            if (currentTank < 0) {
                startIndex = i + 1; // Next station is the new start point
                currentTank = 0; // Reset the current tank
            }
        }
        
        // If total gas is less than total cost, return -1
        return totalTank >= 0 ? startIndex : -1;
    }
};
