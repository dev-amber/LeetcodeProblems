class Solution {
public:
    string removeDuplicates(string s) {
       stack <char> st;
       string answer;
       for(int i=0; i< s.size(); i++){
        if(st.empty() || s[i]!=st.top()) st.push(s[i]);
        else if(s[i]==st.top()) st.pop();
       }

       // to convert stack into string
       while(!st.empty()){
        answer.push_back(st.top());
        st.pop();
       }
       reverse(answer.begin(), answer.end());
       return answer;

    }
};