class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
      int m = board.size(), n = board[0].size();
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == word[0] && dfs(board, word, i, j, 0)) {
                    return true;
                }
            }
        }
        return false;  
    }
    private:
    bool dfs(vector<vector<char>>& board, string& word, int i, int j, int index) {
        if (index == word.size()) return true; // Found the word
        
        // Boundary and character match check
        if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != word[index]) {
            return false;
        }

        // Mark the cell as visited by changing its value temporarily
        char temp = board[i][j];
        board[i][j] = '#'; // Mark visited

        // Explore all four directions
        bool found = dfs(board, word, i+1, j, index+1) || 
                     dfs(board, word, i-1, j, index+1) ||
                     dfs(board, word, i, j+1, index+1) || 
                     dfs(board, word, i, j-1, index+1);

        // Restore the cell back to its original value
        board[i][j] = temp;

        return found;
    }
};