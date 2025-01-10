class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minNum = *std::min_element(nums.begin(), nums.end());
        int maxNum = *std::max_element(nums.begin(), nums.end());
        
        // Calculate and return the GCD of the smallest and largest numbers
        return std::gcd(minNum, maxNum);
    }
};