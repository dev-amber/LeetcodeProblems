class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
         std::vector<bool> result;
    int current = 0; // To store the current value mod 5

    for (int num : nums) {
        current = (current * 2 + num) % 5; // Update the number with the next bit
        result.push_back(current == 0);   // Check divisibility by 5
    }
    return result;
    }
};