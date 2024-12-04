class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
     int distance = 0; // Total distance traveled

        while (mainTank > 0) {
            if (mainTank >= 5) {
                // Consume 5 liters from the main tank
                mainTank -= 5;
                distance += 50; // Add 50 km (10 km/l * 5 liters)

                // Transfer 1 liter from additional tank to main tank if possible
                if (additionalTank > 0) {
                    additionalTank--;
                    mainTank++;
                }
            } else {
                // Consume remaining fuel in the main tank
                distance += mainTank * 10;
                mainTank = 0;
            }
        }
         return distance;
   
    }
};