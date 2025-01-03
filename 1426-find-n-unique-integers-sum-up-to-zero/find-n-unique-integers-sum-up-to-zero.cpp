class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> result;
    // Add pairs of numbers that sum to 0
    for (int i = 1; i <= n / 2; ++i) {
        result.push_back(i);
        result.push_back(-i);
    }
    // If n is odd, include 0
    if (n % 2 != 0) {
        result.push_back(0);
    }
    return result; 
    }
};