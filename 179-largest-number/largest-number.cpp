class Solution {
public:
   

   static bool compare(const string &a, const string &b) {
        return a + b > b + a;
    }

    string largestNumber(vector<int>& nums) {
        vector<string> strNums;
        
        for (int num : nums) {
            strNums.push_back(to_string(num));
        }

        // Use the static function correctly
        sort(strNums.begin(), strNums.end(), Solution::compare);

        if (strNums[0] == "0") return "0";

        string result;
        for (const string &num : strNums) {
            result += num;
        }

        return result;
    }

};
