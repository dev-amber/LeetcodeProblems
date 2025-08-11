class Solution {
public:
  void solve(vector<int>& nums, vector<vector<int>>& ans, vector<int>& temp, int index){
    ans.push_back(temp);
    for(int i=index;i< nums.size(); i++){

        // choose
        temp.push_back(nums[i]);
        // backtrack
        solve(nums, ans, temp, i + 1);

        // unchoose
        temp.pop_back();

    }
  }

    vector<vector<int>> subsets(vector<int>& nums) {
         vector<vector<int>>  ans;
         vector<int> temp;
         solve( nums, ans, temp, 0);
         return ans;

    }
};