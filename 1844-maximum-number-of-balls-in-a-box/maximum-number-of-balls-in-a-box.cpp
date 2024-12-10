class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int, int> boxCount; // Map to store box number and its count
    int maxBalls = 0;

    // Iterate through each ball number
    for (int i = lowLimit; i <= highLimit; ++i) {
        int sum = 0, num = i;

        // Calculate the sum of digits of the ball number
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }

        // Increment the count of balls in the corresponding box
        boxCount[sum]++;
        
        // Keep track of the maximum balls in any box
        maxBalls = max(maxBalls, boxCount[sum]);
    }

    return maxBalls;
    }
};