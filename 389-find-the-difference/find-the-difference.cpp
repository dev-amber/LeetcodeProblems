class Solution {
public:
    char findTheDifference(string s, string t) {
        int freq[26] = {0};
    for (char c : t) freq[c - 'a']++; // Increment for characters in t
    for (char c : s) freq[c - 'a']--; // Decrement for characters in s
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) return 'a' + i; // Find the extra character
    }
    return ' ';
    }
};