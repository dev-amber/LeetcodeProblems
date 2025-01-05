class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
         unordered_set<string> startingCities;
        
        // Add all starting cities to the set
        for (const auto& path : paths) {
            startingCities.insert(path[0]);
        }
        
        // Find the city that is not a starting city
        for (const auto& path : paths) {
            if (startingCities.find(path[1]) == startingCities.end()) {
                return path[1];
            }
        }
        
        return ""; 
    }
};