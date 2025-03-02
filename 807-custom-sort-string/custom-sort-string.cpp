class Solution {
public:
    string customSortString(string order, string s) {
      unordered_map<char, int> orderMap;
    
    // Store the order of characters
    for (int i = 0; i < order.size(); i++) {
        orderMap[order[i]] = i;
    }
    
    // Custom sorting function
    sort(s.begin(), s.end(), [&](char a, char b) {
        return orderMap[a] < orderMap[b];
    });
    
    return s;  
    }
};