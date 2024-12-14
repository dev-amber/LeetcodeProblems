class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
       int rookRow = -1, rookCol = -1;

        // Find the position of the rook 'R'
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                if (board[i][j] == 'R') {
                    rookRow = i;
                    rookCol = j;
                    break;
                }
            }
            if (rookRow != -1) break;
        }
         int directions[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        int pawnsCaptured = 0;

        // Check each direction
        for (auto& dir : directions) {
            int x = rookRow, y = rookCol;

            // Move in the current direction
            while (true) {
                x += dir[0];
                y += dir[1];

                // Stop if we go out of bounds
                if (x < 0 || x >= 8 || y < 0 || y >= 8) break;

                // Stop if a bishop is blocking the path
                if (board[x][y] == 'B') break;

                // If we find a pawn, count it and stop looking further in this direction
                if (board[x][y] == 'p') {
                    ++pawnsCaptured;
                    break;
                }
            }
        }

        return pawnsCaptured;  
    }
};