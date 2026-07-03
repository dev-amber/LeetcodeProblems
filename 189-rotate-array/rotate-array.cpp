class Solution {
public:
    void rotate(vector<int>& nums, int k) {
     int n=nums.size(); // n ki size find
     k=k%n; // k ki value find ka kitnay rotation lagay gyy
     reverse(nums.begin(),nums.end()); // all array reverse
     reverse(nums.begin(),nums.begin()+k); // first part ka ka according reverse karay gyyl left
     reverse(nums.begin()+k,nums.end()); // right part reversethis 
    
    }
};