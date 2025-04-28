class Solution {
public:
    int nextGreaterElement(int n) {
         string num = to_string(n);
        int i = num.size() - 2;

        // Step 1: Find the first decreasing element from the end
        while (i >= 0 && num[i] >= num[i + 1]) {
            i--;
        }

        // If no such element, return -1
        if (i < 0) return -1;

        // Step 2: Find the next greater element to swap with
        int j = num.size() - 1;
        while (j >= 0 && num[j] <= num[i]) {
            j--;
        }

        // Step 3: Swap
        swap(num[i], num[j]);

        // Step 4: Reverse the part after position i
        reverse(num.begin() + i + 1, num.end());

        // Step 5: Convert back to integer
        long ans = stol(num);
        
        // Step 6: Check if it fits in 32-bit
        return (ans > INT_MAX) ? -1 : ans;
    }
};