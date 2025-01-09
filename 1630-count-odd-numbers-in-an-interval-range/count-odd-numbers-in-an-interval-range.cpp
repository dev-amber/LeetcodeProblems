class Solution {
public:
    int countOdds(int low, int high) {
       int totalNumbers = high - low + 1;

    // If both low and high are odd, the count of odd numbers is:
    // (totalNumbers + 1) / 2
    // If either one of low or high is even, the count of odd numbers is:
    // totalNumbers / 2

    return (totalNumbers + low % 2) / 2; 
    }
};