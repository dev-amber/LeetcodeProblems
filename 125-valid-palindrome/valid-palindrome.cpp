class Solution {
public:
    bool isPalindrome(string s) {
        int left=0; int right=s.size()-1;
        while(left < right){
            if(isalnum(s[left]) && isalnum(s[right])){
     if(tolower(s[left]) != tolower (s[right])) return false;
            left++;
            right--;
}
           
    while (!isalnum (s[left]) && left< right ) left++;
    while (!isalnum (s[right]) && left < right) right--;
    }
    
       return true;
}

};