class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
       //   EDGE CASE
       if(k<=1) return 0;

       int count=0;
        long long product=1;
// window set
        int left=0;
        for(int right=0;right< nums.size();right++){
           product*=nums[right];

           while(product >= k && left<=right){
             product/=nums[left];
             left++;
           }
           count+=(right-left+1); // += bcz we store prev value 10,5,2 
        }
        return count;

    }
};