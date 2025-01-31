class Solution {
public:
    int longestPalindrome(string s) {
         std::unordered_map<char, int> freqMap;
    
    // Count frequencies of each character
    for (char c : s) {
        freqMap[c]++;
    }
    
    int length = 0;
    bool hasOdd = false;
    
    // Calculate the maximum length of palindrome
    for (const auto& entry : freqMap) {
        if (entry.second % 2 == 0) {
            length += entry.second;
        } else {
            length += (entry.second - 1); // Add the largest even number less than the odd frequency
            hasOdd = true; // Indicate that there is at least one odd frequency
        }
    }
    
    // If there is at least one odd frequency, add 1 to the length (for the center character)
    if (hasOdd) {
        length += 1;
    }
    
    return length;
    }
};