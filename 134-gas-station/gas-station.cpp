class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
       int totalGas = 0, totalCost = 0, tank = 0, start = 0;

        for (int i = 0; i < gas.size(); ++i) {
            totalGas += gas[i];
            totalCost += cost[i];
            tank += gas[i] - cost[i];

            // If the tank is negative, reset the start point
            if (tank < 0) {
                start = i + 1; // Move to the next station
                tank = 0; // Reset the tank
            }
        }

        // If total gas is less than total cost, return -1
        return totalGas < totalCost ? -1 : start;  
    }
};