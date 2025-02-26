class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
       int targetFreq[26] = {0};
    for (char ch : licensePlate) {
        if (isalpha(ch)) {
            targetFreq[tolower(ch) - 'a']++;
        }
    }
    
    // Step 2: Initialize variables to keep track of the shortest completing word
    string result = "";
    int minLen = INT_MAX;

    // Step 3: Iterate over each word in `words`
    for (const string& word : words) {
        int wordFreq[26] = {0};

        // Step 4: Count frequency of each letter in the current word
        for (char ch : word) {
            if (isalpha(ch)) {
                wordFreq[tolower(ch) - 'a']++;
            }
        }

        // Step 5: Check if `word` meets the frequency requirements of `licensePlate`
        bool isValid = true;
        for (int i = 0; i < 26; i++) {
            if (wordFreq[i] < targetFreq[i]) {
                isValid = false;
                break;
            }
        }

        // Step 6: If it's a completing word and shorter than the current shortest, update `result`
        if (isValid && word.length() < minLen) {
            result = word;
            minLen = word.length();
        }
    }

    return result; 
    }
};