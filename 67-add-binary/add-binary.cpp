class Solution {
public:
    string addBinary(string a, string b) {
      int i = a.size() - 1, j = b.size() - 1, carry = 0;
        string result = "";

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += a[i--] - '0'; // Convert char to int
            if (j >= 0) sum += b[j--] - '0';

            result += (sum % 2) + '0'; // Append the binary digit
            carry = sum / 2; // Compute carry
        }
        
        reverse(result.begin(), result.end()); // Reverse the result to get correct order
        return result;  
    }
};