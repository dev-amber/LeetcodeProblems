class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> freqMap;
    for (char task : tasks) {
        freqMap[task]++;
    }

    // Max-Heap (priority queue) to store task frequencies
    priority_queue<int> maxHeap;
    for (auto it : freqMap) {
        maxHeap.push(it.second);
    }

    queue<pair<int, int>> cooldownQueue; // Pair (remaining count, available time)
    int time = 0;

    while (!maxHeap.empty() || !cooldownQueue.empty()) {
        time++;

        if (!maxHeap.empty()) {
            int freq = maxHeap.top(); 
            maxHeap.pop();
            freq--; // Execute task

            if (freq > 0) { // If more instances of the task are left
                cooldownQueue.push({freq, time + n});
            }
        }

        // If a task's cooldown is over, push it back into maxHeap
        if (!cooldownQueue.empty() && cooldownQueue.front().second == time) {
            maxHeap.push(cooldownQueue.front().first);
            cooldownQueue.pop();
        }
    }

    return time;
    }
};