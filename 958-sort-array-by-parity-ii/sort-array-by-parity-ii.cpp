class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
         int n = nums.size();
    int evenIndex = 0, oddIndex = 1;

    while (evenIndex < n && oddIndex < n) {
        // If the value at evenIndex is even, move to the next even index
        if (nums[evenIndex] % 2 == 0) {
            evenIndex += 2;
        }
        // If the value at oddIndex is odd, move to the next odd index
        else if (nums[oddIndex] % 2 == 1) {
            oddIndex += 2;
        }
        // Otherwise, swap the mismatched values
        else {
            swap(nums[evenIndex], nums[oddIndex]);
            evenIndex += 2;
            oddIndex += 2;
        }
    }

    return nums;
    }
};