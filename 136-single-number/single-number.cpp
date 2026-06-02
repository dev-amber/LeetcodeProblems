class Solution {
public:
    int singleNumber(vector<int>& nums) {
      int result=0;
      for(int num:nums){ // in XOR smae bit 0 differnet bits 1
        result^=num;
      }
      return result;
    }
};