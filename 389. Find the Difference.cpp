// 389. Find the Difference
// Solution:
// CODE:
class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> count;

        // Count characters in string s
        for (char c : s) {
            count[c]++;
        }

        // Subtract characters in string t
        for (char c : t) {
            count[c]--;
        }

        // Find the character with count -1 (added in t)
        for (auto& pair : count) {
             if (pair.second == -1) {
                return pair.first;
            }
        }

        // If no character found, return '\0' or throw an exception
        return '\0'; // or throw std::runtime_error("No added character found");
    }
};
