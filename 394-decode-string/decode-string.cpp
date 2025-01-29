class Solution {
public:
    string decodeString(string s) {
     stack<int> countStack;       // Stack to store repeat counts (k)
    stack<string> stringStack;   // Stack to store previous decoded substrings
    string currentString = "";   // Current decoded string
    int k = 0;                   // Repeat count

    for (char c : s) {
        if (isdigit(c)) {
            k = k * 10 + (c - '0');  // Compute the full digit for multi-digit numbers
        } 
        else if (c == '[') {
            countStack.push(k);        // Push k onto stack
            stringStack.push(currentString);  // Push current string onto stack
            k = 0;                     // Reset k
            currentString = "";         // Reset current string
        } 
        else if (c == ']') {
            int repeatCount = countStack.top();
            countStack.pop();
            string decodedPart = stringStack.top();
            stringStack.pop();
            
            // Repeat current string 'repeatCount' times and append to the previous string
            for (int i = 0; i < repeatCount; i++) {
                decodedPart += currentString;
            }
            
            currentString = decodedPart;  // Set the decoded part as the new currentString
        } 
        else {
            currentString += c;  // Append characters to current string
        }
    }

    return currentString;   
    }
};