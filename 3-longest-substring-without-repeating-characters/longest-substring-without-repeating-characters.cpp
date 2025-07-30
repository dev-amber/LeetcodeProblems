class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     unordered_set<char> hs;
     int maxLength=0;
     int left=0;

     for(int right=0; right< s.length();right++){
        // window shrink and remove duplicate if already exist
        while(hs.find(s[right]) != hs.end()){
            hs.erase(s[left]);
            left++;
     }
     hs.insert(s[right]);

  // upadte windowsize
  int windowSize=right-left+1;
  maxLength=max(maxLength, windowSize);
     }
     return maxLength;
    }
};