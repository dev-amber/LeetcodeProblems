class Solution {
public:

   bool isGoodString(string word, unordered_map<char,int> freq){
    for(int i=0; i< word.size();i++){
       if(freq.count(word[i]) && freq[word[i]] > 0)  freq[word[i]]--;
        else return false;
    }
    return true;
   }
    int countCharacters(vector<string>& words, string chars) {
        int count=0;

        unordered_map <char,int> freq;
        for(int i=0; i<  chars.size(); i++){
            freq[chars[i]]++;
        }

        for(int i=0; i<  words.size(); i++){
         if(isGoodString(words[i],freq)) count+=words[i].size();
        }
        return count;

        
    }
};