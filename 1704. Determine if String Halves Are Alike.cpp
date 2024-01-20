// 1704. Determine if String Halves Are Alike
// Solution:-

// CODE:
class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.size();

        // Define a set of vowels
        unordered_set<char> vowels{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

        // Count the number of vowels in the first half (a)
        int countA = 0;
        for (int i = 0; i < n / 2; ++i) {
            if (vowels.count(s[i])) {
                countA++;
            }
        }

        // Count the number of vowels in the second half (b)
        int countB = 0;
        for (int i = n / 2; i < n; ++i) {
            if (vowels.count(s[i])) {
                countB++;
            }
        }

        // Return true if the number of vowels in a and b is the same, otherwise return false
        return countA == countB;

    }
};
