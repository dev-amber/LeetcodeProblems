class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
         unordered_map<int, int> freq; // To store frequency of elements
    unordered_map<int, int> firstPos, lastPos; // To store first and last occurrence

    int degree = 0;

    // Populate the maps
    for (int i = 0; i < nums.size(); ++i) {
        int num = nums[i];
        freq[num]++;
        if (firstPos.find(num) == firstPos.end()) {
            firstPos[num] = i; // Record first occurrence
        }
        lastPos[num] = i; // Update last occurrence
        degree = max(degree, freq[num]); // Update the degree of the array
    }

    // Find the minimum subarray length with the same degree
    int minLength = nums.size();
    for (auto& [num, count] : freq) {
        if (count == degree) {
            int length = lastPos[num] - firstPos[num] + 1;
            minLength = min(minLength, length);
        }
    }

    return minLength;
    }
};