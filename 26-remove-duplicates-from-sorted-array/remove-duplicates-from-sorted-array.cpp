class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0; // Handle empty array case

        int i = 0; // Pointer for the last unique element
        for (int j = 1; j < nums.size(); ++j) {
            if (nums[j] != nums[i]) { // Found a new unique element 
                i++; // Move the unique pointer
                nums[i] = nums[j]; // Update the array with the new unique element
            }
        }
        return i + 1; 
    }
};