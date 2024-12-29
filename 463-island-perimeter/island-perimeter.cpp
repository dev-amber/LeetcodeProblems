class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
       int rows = grid.size();
        int cols = grid[0].size();
        int perimeter = 0;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 1) {
                    // Add 4 for the current land cell
                    perimeter += 4;

                    // Subtract 1 for each neighboring land cell
                    if (i > 0 && grid[i - 1][j] == 1) perimeter--; // Check top
                    if (i < rows - 1 && grid[i + 1][j] == 1) perimeter--; // Check bottom
                    if (j > 0 && grid[i][j - 1] == 1) perimeter--; // Check left
                    if (j < cols - 1 && grid[i][j + 1] == 1) perimeter--; // Check right
                }
            }
        }

        return perimeter;
}
};