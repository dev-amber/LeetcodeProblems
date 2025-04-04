class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
      int rows = matrix.size();            // Number of rows
        int cols = matrix[0].size();         // Number of columns

        // Create a new matrix with transposed dimensions
        vector<vector<int>> result(cols, vector<int>(rows));

        // Fill in the transposed matrix
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result[j][i] = matrix[i][j];
            }
        }

        return result;  
    }
};