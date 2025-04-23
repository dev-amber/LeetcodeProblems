class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
      int k = primes.size();
    vector<int> ugly(n, 1);       // ugly[0] = 1
    vector<int> idx(k, 0);        // pointers for each prime
    vector<long> next(k, 0);      // next candidates

    for (int i = 1; i < n; ++i) {
        long min_val = LONG_MAX;

        for (int j = 0; j < k; ++j) {
            next[j] = (long)primes[j] * ugly[idx[j]];
            min_val = min(min_val, next[j]);
        }

        ugly[i] = (int)min_val;

        for (int j = 0; j < k; ++j) {
            if (next[j] == min_val) {
                idx[j]++;
            }
        }
    }

    return ugly[n - 1];
    }
};