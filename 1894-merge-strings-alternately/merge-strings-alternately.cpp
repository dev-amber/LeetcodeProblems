class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string answer;
        int left=0;
        int right=0;
        while(left < word1.size() && right < word2.size()){
            answer.push_back( word1[left]);
             answer.push_back (word2[right]);
             left++;
             right++;
        }
        while(left < word1.size()){
            answer.push_back(word1[left]);
              left++;
        }
        while(right < word2.size()){
            answer.push_back(word2[right]);
              right++;
        }
        return answer;
    }
};