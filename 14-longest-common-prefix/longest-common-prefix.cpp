class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         if (strs.empty()) return "";

    // Start by assuming the prefix is the entire first string
    string prefix = strs[0];

    // Compare prefix with each string in the array
    for (int i = 1; i < strs.size(); i++) {
        // Check the common prefix with the current string
        while (strs[i].find(prefix) != 0) {
            // Reduce the prefix size until a common prefix is found
            prefix = prefix.substr(0, prefix.size() - 1);
            if (prefix.empty()) return "";
        }
    }
    return prefix;
    }
};