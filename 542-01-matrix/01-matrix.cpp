class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
     int m = mat.size();
    int n = mat[0].size();
    queue<pair<int, int>> q;
    
    // Initialize the matrix: mark '1' as -1 and push '0' positions to the queue
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] == 0) {
                q.push({i, j});
            } else {
                mat[i][j] = -1;  // Mark unvisited cells
            }
        }
    }
    
    // Directions for moving in 4 possible directions (up, down, left, right)
    vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    
    // BFS traversal
    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();
        
        for (auto [dx, dy] : directions) {
            int newX = x + dx;
            int newY = y + dy;
            
            // Check if the new position is within bounds and not visited
            if (newX >= 0 && newX < m && newY >= 0 && newY < n && mat[newX][newY] == -1) {
                mat[newX][newY] = mat[x][y] + 1;  // Update distance
                q.push({newX, newY});
            }
        }
    }
    
    return mat;   
    }
};