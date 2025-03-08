class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
         int m = mat.size(), n = mat[0].size();
    
    // Check if reshaping is possible
    if (m * n != r * c) return mat;
    
    vector<vector<int>> reshaped(r, vector<int>(c));
    int index = 0;
    
    // Fill the reshaped matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            reshaped[index / c][index % c] = mat[i][j];
            index++;
        }
    }
    
    return reshaped;
    }
};