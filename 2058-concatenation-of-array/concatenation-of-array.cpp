class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();    // size store so n use
        vector<int> ans(2 * n); // index calculate and double

        for (int i = 0; i < n; i++) {
            ans[i] = nums[i];     // ithout repeat val have
            ans[i + n] = nums[i]; // its calculate 4 index start
        }
        return ans;
    }
};