class Solution {
public:
    const int MOD = 1e9 + 7;

    // Helper function to check if a number is prime
    bool isPrime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i * i <= n; ++i) {
            if (n % i == 0) return false;
        }
        return true;
    }

    // Helper function to calculate factorial modulo MOD
    long long factorial(int n) {
        long long result = 1;
        for (int i = 1; i <= n; ++i) {
            result = (result * i) % MOD;
        }
        return result;
    }

    int numPrimeArrangements(int n) {
        int primeCount = 0;

        // Count prime numbers from 1 to n
        for (int i = 1; i <= n; ++i) {
            if (isPrime(i)) {
                ++primeCount;
            }
        }

        // Calculate non-prime count
        int nonPrimeCount = n - primeCount;

        // Calculate the result using factorials
        long long primeFactorial = factorial(primeCount);
        long long nonPrimeFactorial = factorial(nonPrimeCount);

        // Return the result modulo MOD
        return (primeFactorial * nonPrimeFactorial) % MOD;
    }
};