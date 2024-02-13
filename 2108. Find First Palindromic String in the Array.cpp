// 2108. Find First Palindromic String in the Array
// Solution:

// CODE:
class Solution {
public:
    bool isPalindrome(const string& s){
        int left = 0;
        int right = s.length() - 1;

        while(left < right){
            if(s[left] != s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(const string& word : words){
            if(isPalindrome(word)){
                return word;
            }
        }
        return"";
    }
};
