class Solution {
public:
    string sortString(string s) {
       string answer;
       vector<int>freq(26);
       for(int i=0; i< s.size();i++){
      freq[s[i] - 'a']++;
       } 

       int orderOfAppend=1;

       while(s.size() != answer.size()){
    if (orderOfAppend % 2 != 0){
            for(int i=0; i< 26 ;i++){
                if(freq[i]){
                    answer.push_back(i + 'a');
                    freq[i]--;
                }
            }
        }
        else{
         for (int i=25; i >=0; i--){
            if(freq[i]){
                answer.push_back(i + 'a');
                freq[i]--;
            }
        }
        }
           orderOfAppend++;
       }
        return answer;
       }
};