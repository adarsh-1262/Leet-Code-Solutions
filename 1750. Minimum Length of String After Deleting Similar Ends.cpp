// 1750. Minimum Length of String After Deleting Similar Ends
// Solution:

// CODE:
class Solution {
public:
    int minimumLength(string s) {
        int left = 0, right = s.size() - 1;

        while (left < right && s[left] == s[right]) {
            char ch = s[left];
            // Move left pointer to the right until it's either at the end or a different character is found
            while (left <= right && s[left] == ch) left++;
            // Move right pointer to the left until it's either at the start or a different character is found
            while (right >= left && s[right] == ch) right--;
        }
        return max(right - left + 1, 0);
    }
};
