// 136. Single Number
// Solutions:-

// CODE:
class Solution {
 public:
  int singleNumber(vector<int>& nums) {
    int ans = 0;

    for (const int num : nums)
      ans ^= num;

    return ans;
  }
};
