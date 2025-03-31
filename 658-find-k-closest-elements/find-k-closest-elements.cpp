class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int left = 0, right = arr.size() - k;
    
    // Binary search to find the best starting position
    while (left < right) {
        int mid = left + (right - left) / 2;
        
        // Compare distances from x
        if (x - arr[mid] > arr[mid + k] - x) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    // Extract the k closest elements from the computed left boundary
    return vector<int>(arr.begin() + left, arr.begin() + left + k);
    }
};