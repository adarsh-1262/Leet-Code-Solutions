// 41. First Missing Positive
// Solution:
// CODE:
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
     int n = nums.size();

    // Perform cyclic sort
    for (int i = 0; i < n; ++i) {
        while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i]) {
            std::swap(nums[i], nums[nums[i] - 1]);
        }
    }

    // Find the first positive integer that is not present
    for (int i = 0; i < n; ++i) {
        if (nums[i] != i + 1) {
            return i + 1;
        }
    }

    // If all positive integers from 1 to n are present, return n+1
    return n + 1;
    }
};
