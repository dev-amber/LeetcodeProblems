class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        // Edge case
        if (s1.length() > s2.length())
            return false;

        unordered_map<char, int> hm1, hm2;
        for (int i = 0; i < s1.length(); i++) {
            hm1[s1[i]]++;
            hm2[s2[i]]++;
        }

        if (hm1 == hm2)
            return true;

        int left = 0;
        for (int right = s1.length(); right < s2.length(); right++) {
            char outChar = s2[left];
            hm2[outChar]--;
            if (hm2 [outChar] == 0) {
                hm2.erase(outChar);
            }
            char inChar = s2[right];
            hm2[inChar]++;

            if (hm1 == hm2)
                return true;
            left++;
        }
        return false;
    }
};