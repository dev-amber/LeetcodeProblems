class Solution {
public:
    bool isLeap(int year) {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

    // Helper to convert date to number of days since 1970-01-01
    int dateToDays(string date) {
        int y = stoi(date.substr(0, 4));
        int m = stoi(date.substr(5, 2));
        int d = stoi(date.substr(8, 2));
        
        // Days in each month
        vector<int> daysInMonth = {31, 28, 31, 30, 31, 30,
                                   31, 31, 30, 31, 30, 31};

        int days = 0;

        // Add days for full years
        for (int year = 1971; year < y; ++year) {
            days += isLeap(year) ? 366 : 365;
        }

        // Add days for full months in the current year
        for (int month = 1; month < m; ++month) {
            if (month == 2 && isLeap(y)) {
                days += 29;
            } else {
                days += daysInMonth[month - 1];
            }
        }

        // Add days in the current month
        days += d;

        return days;
    }

    int daysBetweenDates(string date1, string date2) {
        return abs(dateToDays(date1) - dateToDays(date2));
    }
    
};