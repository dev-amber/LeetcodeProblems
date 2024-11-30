class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         // Create a map to store the element -> index mapping
        std::unordered_map<int, int> num_map;
        
        // Iterate through the array
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            
            // Check if the complement exists in the map
            if (num_map.find(complement) != num_map.end()) {
                // Found the pair, return the indices
                return { num_map[complement], i };
            }
            
            // Store the current number and its index in the map
            num_map[nums[i]] = i;
        }
        
        // No solution found (though the problem guarantees exactly one solution)
        return {};
    }
};