// 58. Length of Last Word
// Solution:
// CODE:
class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        bool foundWord = false;

        // Traverse the string in reverse order
        for (int i = s.length() - 1; i >= 0; i--) {
            // If a non-space character is encountered, start counting
            if (s[i] != ' ') {
                foundWord = true;
                length++;
            }
            // If a space is encountered and we have already found a word, break
            else if (foundWord) {
                break;
            }
        }
        return length;
    }
};
