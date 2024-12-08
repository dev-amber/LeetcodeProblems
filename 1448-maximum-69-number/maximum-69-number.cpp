class Solution {
public:
    int maximum69Number (int num) {
        string numStr = to_string(num); // Convert the number to a string
    for (char &ch : numStr) {      // Iterate through the string
        if (ch == '6') {           // Check for the first occurrence of '6'
            ch = '9';              // Replace '6' with '9'
            break;                 // Break after the first replacement
        }
    }
    return stoi(numStr);  
    }
};