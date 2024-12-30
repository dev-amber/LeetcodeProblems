class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
         unordered_map<int, int> count;
        // Count the frequency of each number
        for (int card : deck) {
            count[card]++;
        }

        // Compute the GCD of all frequencies
        int gcdValue = 0;
        for (auto& pair : count) {
            gcdValue = gcd(gcdValue, pair.second);
        }

        // If GCD is greater than 1, return true; otherwise, return false
        return gcdValue > 1;
    }
};