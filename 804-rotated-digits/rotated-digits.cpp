class Solution {
public:
    int rotatedDigits(int n) {
         unordered_map<int, int> rotateMap = {
            {0, 0}, {1, 1}, {8, 8}, {2, 5}, {5, 2}, {6, 9}, {9, 6}
        };

        // Function to check if a number is good
        auto isGood = [&](int num) {
            int original = num;
            int rotated = 0, multiplier = 1;
            bool isDifferent = false;

            while (num > 0) {
                int digit = num % 10;
                if (rotateMap.find(digit) == rotateMap.end()) {
                    return false; // Contains invalid digit
                }
                int rotatedDigit = rotateMap[digit];
                rotated = rotatedDigit * multiplier + rotated;
                if (rotatedDigit != digit) {
                    isDifferent = true;
                }
                multiplier *= 10;
                num /= 10;
            }

            return isDifferent && rotated != original;
        };

        // Count good numbers
        int count = 0;
        for (int i = 1; i <= n; ++i) {
            if (isGood(i)) {
                ++count;
            }
        }

        return count;
    }
};