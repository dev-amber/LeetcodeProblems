class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxHeap;

    // Push all stones into the heap
    for (int stone : stones) {
        maxHeap.push(stone);
    }

    // Process the stones until there is one or none left
    while (maxHeap.size() > 1) {
        int y= maxHeap.top(); // Heaviest stone
        maxHeap.pop();
        int x= maxHeap.top(); // Second heaviest stone
        maxHeap.pop();

        if(x==y){
            maxHeap.push(0);
        }

        if (x != y) {
            maxHeap.push(y - x); // Push the difference back
        }
    }

    // Return the last stone weight, or 0 if no stones are left
    return maxHeap.empty() ? 0 : maxHeap.top();
    }
};