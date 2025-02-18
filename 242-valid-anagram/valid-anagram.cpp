class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
        return false;
    }

    // Copy the strings to avoid modifying the original ones
    std::string sorted_s = s;
    std::string sorted_t = t;

    // Sort both strings
    std::sort(sorted_s.begin(), sorted_s.end());
    std::sort(sorted_t.begin(), sorted_t.end());

    // Compare the sorted strings
    return sorted_s == sorted_t;
    }
};