// 709. To Lower Case
// Solution:-

// CODE:
class Solution {
public:
    string toLowerCase(string s) {
      transform(s.begin(), s.end(), s.begin(), ::tolower);
      return s;
    }
};
