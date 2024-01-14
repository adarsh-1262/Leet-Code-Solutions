// Count Elements With Maximum Frequency
// Solution:-

// CODE:
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        // Step 1: Count the frequency of each element
        unordered_map<int, int> freq_map;
        for (int num : nums) {
        freq_map[num]++;
        }

        // Step 2: Find the maximum frequency
        int max_freq = 0;
        for (const auto& entry : freq_map) {
        max_freq = std::max(max_freq, entry.second);
        }

        // Step 3: Count the number of elements with the maximum frequency
        int max_freq_count = 0;
        for (const auto& entry : freq_map) {
        if (entry.second == max_freq) {
            max_freq_count++;
            }
        }

        return max_freq * max_freq_count;
    }
};
