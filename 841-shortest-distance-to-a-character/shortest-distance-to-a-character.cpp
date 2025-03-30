class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
     int n = s.length();
    vector<int> answer(n, INT_MAX);
    
    // First pass: Left to Right
    int prev = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == c) {
            answer[i] = 0;
            prev = i;
        } else if (prev != -1) {
            answer[i] = i - prev;
        }
    }

    // Second pass: Right to Left
    prev = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == c) {
            prev = i;
        } else if (prev != -1) {
            answer[i] = min(answer[i], prev - i);
        }
    }

    return answer;   
    }
};