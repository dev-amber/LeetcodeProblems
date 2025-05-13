class Solution {
public:
  string largestOddNumber(string num) {
        for (int i = num.size() - 1; i >= 0; --i) {
        // Check if the current character is an odd digit
        if ((num[i] - '0') % 2 == 1) {
            // If it's odd, return the substring from the start to the current position
            return num.substr(0, i + 1);
        }
    }
    // If no odd digit is found, return an empty string
    return ""; 
    }
};