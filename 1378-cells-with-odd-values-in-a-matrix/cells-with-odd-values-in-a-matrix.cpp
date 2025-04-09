class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<int> row(m, 0);
        vector<int> col(n, 0);
        
        // Count row and column increments
        for (const auto& idx : indices) {
            row[idx[0]]++;
            col[idx[1]]++;
        }
        
        int count = 0;
        // Count cells with odd values
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if ((row[i] + col[j]) % 2 != 0) {
                    count++;
                }
            }
        }
        
        return count; 
    }
};