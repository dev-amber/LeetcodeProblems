class Solution {
public:
    bool checkPerfectNumber(int num) {
       if (num <= 1) {
        return false;  // Since perfect numbers are greater than 1
    }
    
    int sum = 1;  // Start with 1, since 1 is a divisor of any number
    
    // Loop through possible divisors up to sqrt(num)
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) {
                sum += num / i;
            }
        }
    }
    
    return sum == num;  // Check if the sum of divisors equals the number
}
};