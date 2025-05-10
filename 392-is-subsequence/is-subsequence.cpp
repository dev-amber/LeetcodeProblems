class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;

        // Traverse both strings
        while (i < s.length() && j < t.length()) {
            if (s[i] == t[j]) {
                i++; // Move pointer on string s if characters match
            }
            j++; // Always move pointer on string t
        }

        // If i reached the end of s, all characters were found in order
        return i == s.length();
    }
};