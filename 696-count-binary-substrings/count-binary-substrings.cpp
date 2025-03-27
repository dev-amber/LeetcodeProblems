class Solution {
public:
    int countBinarySubstrings(string s) {
       vector<int> groups;  // Stores sizes of consecutive 0s and 1s groups
    int count = 1;  // First character starts a group

    // Step 1: Count consecutive groups of 0s and 1s
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            count++;
        } else {
            groups.push_back(count);
            count = 1;
        }
    }
    groups.push_back(count);  // Add last group count

    // Step 2: Compute valid substrings
    int result = 0;
    for (int i = 1; i < groups.size(); i++) {
        result += min(groups[i - 1], groups[i]);
    }

    return result; 
    }
};