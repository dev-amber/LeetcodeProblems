class Solution {
public:
    bool wordPattern(string pattern, string s) {
       unordered_map<char, string> charToWord;
    unordered_map<string, char> wordToChar;
    vector<string> words;
    stringstream ss(s);
    string word;
    
    // Split the string `s` into words
    while (ss >> word) {
        words.push_back(word);
    }

    // If the number of words and pattern length do not match, return false
    if (words.size() != pattern.size()) return false;

    // Iterate over the pattern and words simultaneously
    for (int i = 0; i < pattern.size(); i++) {
        char c = pattern[i];
        string w = words[i];

        // If character is already mapped, it should match the current word
        if (charToWord.count(c) && charToWord[c] != w) return false;

        // If word is already mapped, it should match the current character
        if (wordToChar.count(w) && wordToChar[w] != c) return false;

        // Map the character to word and word to character
        charToWord[c] = w;
        wordToChar[w] = c;
    }
    
    return true; 
    }
};