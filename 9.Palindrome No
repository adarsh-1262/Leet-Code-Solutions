// Palindrome number solution
// Code:-

class Solution {
public:
    bool isPalindrome(int x) {
        double reverse = 0;
        int temp = x;
        while (temp > 0) {
            reverse = (reverse * 10) + (temp % 10);
            temp = temp / 10;
        }
        return (reverse == x);
    }
};
