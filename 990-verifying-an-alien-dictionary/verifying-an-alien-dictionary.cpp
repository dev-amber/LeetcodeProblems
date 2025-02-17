class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
      // Create a mapping of characters to their respective indices in the alien dictionary
        unordered_map<char, int> alienOrder;
        for (int i = 0; i < order.size(); i++) {
            alienOrder[order[i]] = i;
        }

        // Compare adjacent words in the list
        for (int i = 0; i < words.size() - 1; i++) {
            if (!isOrdered(words[i], words[i + 1], alienOrder)) {
                return false;
            }
        }
        return true;
    }

private:
    bool isOrdered(const string& word1, const string& word2, unordered_map<char, int>& alienOrder) {
        int minLength = min(word1.size(), word2.size());

        for (int i = 0; i < minLength; i++) {
            if (word1[i] != word2[i]) {
                return alienOrder[word1[i]] < alienOrder[word2[i]]; // Compare based on alien dictionary order
            }
        }
        return word1.size() <= word2.size(); // Check if shorter word comes first
    }
};


