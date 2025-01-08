class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        sort(dictionary.begin(), dictionary.end(), [](const string& a, const string& b) {
        return a.length() < b.length();
    });

    unordered_set<string> rootSet(dictionary.begin(), dictionary.end());
    stringstream ss(sentence);
    string word, result;

    while (ss >> word) {
        string replacement = word;
        for (const string& root : dictionary) {
            if (word.substr(0, root.size()) == root) {
                replacement = root;
                break; // Found the shortest root, break early
            }
        }
        if (!result.empty()) result += " ";
        result += replacement;
    }

    return result;
    }
};