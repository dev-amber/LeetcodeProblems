class Solution {
public:
    vector<vector<int>> generate(int numRows) {
         vector<vector<int>> pascalTriangle;  // To store all rows of Pascal's triangle
        
        // Base case: return empty if numRows is 0
        if (numRows == 0) return pascalTriangle;

        // Start generating each row
        for (int i = 0; i < numRows; ++i) {
            vector<int> row(i + 1, 1);  // Create a row with i+1 elements, all initialized to 1
            
            // Fill in the inner elements of the row (the non-boundary elements)
            for (int j = 1; j < i; ++j) {
                row[j] = pascalTriangle[i - 1][j - 1] + pascalTriangle[i - 1][j];
            }
            
            // Add the generated row to the Pascal's triangle
            pascalTriangle.push_back(row);
        }
        
        return pascalTriangle;
    }
};