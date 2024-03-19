// 621. Task Scheduler
// Solution:
// CODE:
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
    // Create a map to store the count of each task
    unordered_map<char, int> taskCount;
    // Priority queue to store tasks based on their count in descending order
    priority_queue<int> pq;

    // Count occurrences of each task
    for (char task : tasks)
        taskCount[task]++;

    // Push task counts into priority queue
    for (auto& pair : taskCount)
        pq.push(pair.second);

    // Variable to store the total number of intervals
    int intervals = 0;

    // Process tasks until the priority queue becomes empty
    while (!pq.empty()) {
        // Temporary vector to store tasks processed in this iteration
        vector<int> temp;

        // Process tasks with cooling time
        for (int i = 0; i < n + 1; ++i) {
            if (!pq.empty()) {
                // Decrement the count of the top task and store it in the temporary vector
                temp.push_back(pq.top() - 1);
                pq.pop();
            }
        }

        // Restore tasks back to the priority queue if their count is still greater than 0
        for (int count : temp) {
            if (count > 0)
                pq.push(count);
        }

        // Increment intervals by the cooling time or the number of tasks processed in this iteration
        intervals += pq.empty() ? temp.size() : n + 1;
    }

    return intervals;
    }
};
