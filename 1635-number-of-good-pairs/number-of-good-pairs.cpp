class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
       int count=0;
       unordered_map <int,int> mp;

       for(int i=0; i< nums.size(); i++){
        if(mp.count(nums[i])){
            count+=mp[nums[i]];
            mp[nums[i]]++;
        }
        else{
            mp[nums[i]]++;
        }
     
       }
       return count;
    }

      
};