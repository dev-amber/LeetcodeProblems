class Solution {
public:
    int titleToNumber(string columnTitle) {
      int columnNumber = 0;
    
    for (char c : columnTitle) {
        // Convert character to its corresponding number ('A' -> 1, 'B' -> 2, ..., 'Z' -> 26)
        int value = c - 'A' + 1;
        
        // Update column number (similar to converting base-26 number to decimal)
        columnNumber = columnNumber * 26 + value;
    }
    
    return columnNumber;   
    }
};