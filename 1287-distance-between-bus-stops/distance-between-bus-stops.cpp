class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        if (start > destination) 
            swap(start, destination);
        
        int totalDistance = 0, clockwiseDistance = 0;
        
        for (int i = 0; i < distance.size(); i++)
            totalDistance += distance[i];

        for (int i = start; i < destination; i++)
            clockwiseDistance += distance[i];

        int counterClockwiseDistance = totalDistance - clockwiseDistance;

        return min(clockwiseDistance, counterClockwiseDistance);
    }
};