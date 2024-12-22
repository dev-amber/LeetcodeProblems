class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
       vector<int> result(num_people, 0); // Initialize the result array with zeros
    int current_candy = 1;             // Start with 1 candy
    int i = 0;                         // Start distributing from the first person

    while (candies > 0) {
        if (candies >= current_candy) {
            result[i % num_people] += current_candy; // Distribute candies
            candies -= current_candy;               // Deduct candies
        } else {
            result[i % num_people] += candies;      // Distribute remaining candies
            break;
        }
         current_candy++; // Increment candy count for the next distribution
        i++;             // Move to the next person
    }

    return result;  
    }
};