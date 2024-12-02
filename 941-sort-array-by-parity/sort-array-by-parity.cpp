class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> result;

    // Add all even numbers first
    for (int num : nums) {
        if (num % 2 == 0) {
            result.push_back(num);
        }
    }

    // Add all odd numbers next
    for (int num : nums) {
        if (num % 2 != 0) {
            result.push_back(num);
        }
    }
      return result; 
    }
};