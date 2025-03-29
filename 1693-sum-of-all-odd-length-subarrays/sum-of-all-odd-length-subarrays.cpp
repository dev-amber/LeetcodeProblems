class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
       int n = arr.size();
    int totalSum = 0;
    
    for (int i = 0; i < n; i++) {
        // Contribution formula for odd-length subarrays
        int contribution = ((i + 1) * (n - i) + 1) / 2;
        totalSum += contribution * arr[i];
    }
    
    return totalSum; 
    }
};