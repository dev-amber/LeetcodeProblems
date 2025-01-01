class Solution {
public:
    int numberOfMatches(int n) {
         int matches = 0;
        while (n > 1) {
            if (n % 2 == 0) {
                matches += n / 2;  // All teams are paired
                n /= 2;
            } else {
                matches += (n - 1) / 2;  // One team advances, the rest are paired
                n = (n - 1) / 2 + 1;
            }
        }
        return matches;
    }
};