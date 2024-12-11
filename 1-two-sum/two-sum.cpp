class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> num_map; // To store the complement and index
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i]; // Calculate the complement
        if (num_map.find(complement) != num_map.end()) {
            return {num_map[complement], i}; // Return indices if complement found
        }
        num_map[nums[i]] = i; // Store the number and its index in the map
    }
    return {};
    }
};