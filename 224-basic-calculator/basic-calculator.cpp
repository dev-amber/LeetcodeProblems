class Solution {
public:
    int calculate(string s) {
       stack<int> st;
    int result = 0;
    int num = 0;
    int sign = 1; // 1 represents '+', -1 represents '-'

    for (int i = 0; i < s.size(); i++) {
        char c = s[i];

        if (isdigit(c)) {
            num = num * 10 + (c - '0');  // Form the multi-digit number
        } 
        else if (c == '+') {
            result += sign * num;
            num = 0;
            sign = 1; // Set sign for next number
        } 
        else if (c == '-') {
            result += sign * num;
            num = 0;
            sign = -1; // Set sign for next number
        } 
        else if (c == '(') {
            st.push(result);
            st.push(sign);
            result = 0; // Reset result inside parentheses
            sign = 1;
        } 
        else if (c == ')') {
            result += sign * num; // Add last number before closing parentheses
            num = 0;
            result *= st.top(); st.pop(); // Multiply by the sign before '('
            result += st.top(); st.pop(); // Add result before '('
        }
    }
    
    result += sign * num; // Add last number if any
    return result; 
    }
};