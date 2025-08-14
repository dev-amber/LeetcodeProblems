class Solution {
public:

    void solve(vector<int>& nums, vector<vector<int>>& ans, vector<int>& temp, int index){
    ans.push_back(temp);
    for(int i=index;i< nums.size(); i++){
        if(i > index && nums[i-1]==nums[i]) continue;

        // choose
        temp.push_back(nums[i]);
        // backtrack
        solve(nums, ans, temp, i + 1);

        // unchoose
        temp.pop_back();

    }
  }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         vector<vector<int>>  ans;
         vector<int> temp;
          sort(nums.begin(),nums.end());
         solve( nums, ans, temp, 0);
         return ans;
    }
};