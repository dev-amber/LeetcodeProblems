class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();
        for (int i = 0; i < n; i += 2 * k) {
            // Reverse the first k characters in the current 2k block
            int left = i;
            int right = min(i + k - 1, n - 1); // Ensure we do not exceed the string length
            while (left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};