class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int minPrice = INT_MAX;  // To track the minimum price so far
    int maxProfit = 0;       // To store the maximum profit

    for (int price : prices) {
        minPrice = min(minPrice, price);  // Update minimum price
        maxProfit = max(maxProfit, price - minPrice);  // Calculate max profit
    }

    return maxProfit;  
    }
};