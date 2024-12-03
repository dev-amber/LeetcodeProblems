class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
       vector<int> minFreq(26, INT_MAX); // To store minimum frequencies of all characters
    
    for (const string& word : words) {
        vector<int> freq(26, 0); // Frequency of characters in the current word
        for (char c : word) {
            freq[c - 'a']++; // Count each character
        }
        
        for (int i = 0; i < 26; ++i) {
            minFreq[i] = min(minFreq[i], freq[i]); // Update the minimum frequency
        }
    }
     vector<string> result;
    for (int i = 0; i < 26; ++i) {
        while (minFreq[i] > 0) { // Add character as many times as it appears
            result.push_back(string(1, i + 'a'));
            minFreq[i]--;
        }
    }
    
    return result;  
    }
};