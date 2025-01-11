class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
         int n = points.size();
        double maxArea = 0.0;

        // Iterate through all combinations of three points
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                for (int k = j + 1; k < n; ++k) {
                    // Extract coordinates
                    int x1 = points[i][0], y1 = points[i][1];
                    int x2 = points[j][0], y2 = points[j][1];
                    int x3 = points[k][0], y3 = points[k][1];

                    // Compute the area using the shoelace formula
                    double area = abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0;

                    // Update the maximum area
                    maxArea = max(maxArea, area);
                }
            }
        }

        return maxArea;
    }
};