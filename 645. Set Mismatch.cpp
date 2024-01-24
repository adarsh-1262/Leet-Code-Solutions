// 645. Set Mismatch:
// Solution:-

// CODE:
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
     unordered_set<int> numSet;
     int duplicate = -1, missing = -1;

    for (int num : nums) {
        if (numSet.count(num) == 1) {
            duplicate = num;
        }
        numSet.insert(num);
     }

    for (int i = 1; i <= nums.size(); ++i) {
        if (numSet.count(i) == 0) {
            missing = i;
            break;
        }
    }

    return {duplicate, missing};
    }
};
