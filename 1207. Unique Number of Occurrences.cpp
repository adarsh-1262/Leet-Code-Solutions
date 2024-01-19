// 1207. Unique Number of Occurrences
// Solution:-

// CODE:
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
         unordered_map<int, int> countMap;

        // Count the occurrences of each value in the array
        for (int num : arr) {
            countMap[num]++;
        }

        // Use a set to check for uniqueness of occurrence counts
        unordered_set<int> uniqueCounts;

        // Check if the count of occurrences is unique
        for (const auto& pair : countMap) {
            if (!uniqueCounts.insert(pair.second).second) {
                // If insertion fails, it means the count is not unique
                return false;
            }
        }

        // All counts are unique
        return true;
    }
};
