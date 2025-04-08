class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
       int n = grid.size();
        int top = 0, front = 0, side = 0;

        for (int i = 0; i < n; ++i) {
            int maxRow = 0, maxCol = 0;
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] > 0) top++;
                maxRow = max(maxRow, grid[i][j]);
                maxCol = max(maxCol, grid[j][i]); // note: grid[j][i] to get column value
            }
            side += maxRow;
            front += maxCol;
        }

        return top + front + side; 
    }
};