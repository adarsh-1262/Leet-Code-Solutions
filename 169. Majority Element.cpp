// 169. Majority Element:
// Solution:-

// CODE:
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = nums[0];
        int count = 1;

        // Iterate through the array starting from the second element
        for (int i = 1; i < nums.size(); ++i) {
            // If count becomes zero, update the candidate
            if (count == 0) {
                candidate = nums[i];
                count = 1;
            }
            // If the current element is the same as the candidate, increment count
            else if (nums[i] == candidate) {
                count++;
            }
            // If the current element is different from the candidate, decrement count
            else {
                count--;
            }
        }

        return candidate;
    }
};
