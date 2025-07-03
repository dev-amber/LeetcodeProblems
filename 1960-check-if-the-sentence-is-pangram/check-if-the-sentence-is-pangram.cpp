class Solution {
public:
    bool checkIfPangram(string sentence) {
     unordered_map <char,int> mp;
     for(char c: sentence){
        if(c >= 'a' && c <= 'z'){
            mp[c]++;
        }
     }
     return mp.size() ==26;
    }

};