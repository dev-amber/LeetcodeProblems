class Solution {
public:
    string countAndSay(int n) {
       if (n == 1) return "1";  // Base case
        
        string result = "1";  // Initial sequence
        
        for (int i = 2; i <= n; i++) {
            string current = "";
            int count = 1;
            
            // Process the previous sequence
            for (int j = 1; j < result.length(); j++) {
                if (result[j] == result[j - 1]) {
                    count++;  // Increment count for the same digit
                } else {
                    current += to_string(count) + result[j - 1];  // Append count and digit
                    count = 1;  // Reset count
                }
            }
            
            // Append the last counted digit
            current += to_string(count) + result.back();
            result = current;  // Update result for next iteration
        }
        
        return result; 
    }
};