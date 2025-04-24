class Solution {
public:
 int dateToDayOfYear(string date) {
        // Days in each month for a non-leap year
        vector<int> daysInMonth = { 31,28,31,30,31,30,31,31,30,31,30,31 };
        int month = stoi(date.substr(0, 2));
        int day = stoi(date.substr(3, 2));
        int totalDays = 0;
        for (int i = 0; i < month - 1; ++i) {
            totalDays += daysInMonth[i];
        }
        return totalDays + day;
    }

    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int startAlice = dateToDayOfYear(arriveAlice);
        int endAlice = dateToDayOfYear(leaveAlice);
        int startBob = dateToDayOfYear(arriveBob);
        int endBob = dateToDayOfYear(leaveBob);

        int overlapStart = max(startAlice, startBob);
        int overlapEnd = min(endAlice, endBob);

        if (overlapStart <= overlapEnd) {
            return overlapEnd - overlapStart + 1;
        } else {
            return 0;
        }
    }
  
};