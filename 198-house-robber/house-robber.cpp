class Solution {
public:
int helper(vector<int>& nums, int i, vector<int> &v){
    if(i >=nums.size()) return 0;
    if(v[i]!=-1) return v[i];

    int steal=nums[i]+helper(nums, i+2,v); //+2 bcz not rb adjacent house
    int skip=helper(nums,i+1,v); // +! next index
   v[i]=max(steal,skip);
   return v[i];
}
    int rob(vector<int>& nums) {
   vector<int> v(101,-1);
    return  helper(nums,0,v);  
    }
};