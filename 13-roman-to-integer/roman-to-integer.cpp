class Solution {
public:
    int romanToInt(string s) {
       unordered_map<char, int> romanMap = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
        {'C', 100}, {'D', 500}, {'M', 1000}
    };
    
    int total = 0; // Initialize total to 0
    int n = s.size(); // Length of the string
    
    for (int i = 0; i < n; ++i) {
        if (i < n - 1 && romanMap[s[i]] < romanMap[s[i + 1]]) {
            total -= romanMap[s[i]]; // Subtract current value
        } else {
            total += romanMap[s[i]]; // Add current value
        }
    }
    
    return total; 
    }
};