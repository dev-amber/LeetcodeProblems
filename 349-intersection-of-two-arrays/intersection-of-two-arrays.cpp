class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         unordered_set<int> set1(nums1.begin(), nums1.end());
    
    // Create another unordered set to store the result (unique intersection)
    unordered_set<int> result_set;

    // Loop through nums2 and check if the element is in set1
    for (int num : nums2) {
        if (set1.find(num) != set1.end()) {
            // If found, add to result_set to maintain uniqueness
            result_set.insert(num);
        }
    }

    // Convert result_set to a vector and return
    return vector<int>(result_set.begin(), result_set.end());
    }
};