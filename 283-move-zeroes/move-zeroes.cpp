class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       vector<int> result;

        // Step 1: Collect all non-zero elements
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) {
                result.push_back(nums[i]);
            }
        }

        // Step 2: Add zeroes at the end
        int zeroCount = nums.size() - result.size();
        for(int i = 0; i < zeroCount; i++) {
            result.push_back(0);
        }

        // Step 3: Copy result back into nums
        nums = result;
    }
  
};