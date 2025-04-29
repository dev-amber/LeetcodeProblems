class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
     int totalSum = 0;
        for (int num : arr) {
            totalSum += num;
        }

        if (totalSum % 3 != 0) return false;
        
        int target = totalSum / 3;
        int sum = 0, count = 0;
        
        for (int i = 0; i < arr.size(); ++i) {
            sum += arr[i];
            if (sum == target) {
                count++;
                sum = 0;
            }
        }
        
        return count >= 3;   
    }
};