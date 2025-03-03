class Solution {
public:
    string reverseWords(string s) {
       stringstream ss(s);
    string word, result;
    
    while (ss >> word) { // Extract words one by one
        reverse(word.begin(), word.end()); // Reverse the word
        if (!result.empty()) result += " "; // Maintain spaces between words
        result += word;
    }
    
    return result;  
    }
};