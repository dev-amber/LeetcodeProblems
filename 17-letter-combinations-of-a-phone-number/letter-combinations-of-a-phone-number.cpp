class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        
        vector<string> phoneMap = {
            "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
        };
        
        vector<string> result;
        string current;
        backtrack(digits, 0, current, result, phoneMap);
        return result;
    }
    
private:
    void backtrack(const string &digits, int index, string &current, vector<string> &result, const vector<string> &phoneMap) {
        // Base case: If we have processed all digits, add the combination to result
        if (index == digits.length()) {
            result.push_back(current);
            return;
        }

        // Get the characters mapped to the current digit
        string letters = phoneMap[digits[index] - '0'];
        for (char letter : letters) {
            current.push_back(letter);   // Choose
            backtrack(digits, index + 1, current, result, phoneMap);  // Explore
            current.pop_back(); 
        } 
    }
};