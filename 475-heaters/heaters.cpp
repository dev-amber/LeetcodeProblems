class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());
        
        int radius = 0;

        // For each house, find the minimum distance to a heater
        for (int house : houses) {
            // Use binary search to find the closest heater
            auto it = lower_bound(heaters.begin(), heaters.end(), house);
            
            int dist1 = (it == heaters.end()) ? INT_MAX : abs(*it - house); // Distance to the right heater
            int dist2 = (it == heaters.begin()) ? INT_MAX : abs(*(it - 1) - house); // Distance to the left heater

            // Take the minimum of the two distances
            int closestDist = min(dist1, dist2);
            
            // Update the maximum radius required
            radius = max(radius, closestDist);
        }

        return radius;
    }
};