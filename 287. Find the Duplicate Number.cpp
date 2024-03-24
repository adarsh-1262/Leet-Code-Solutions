// 287. Find the Duplicate Number
// Soltuion:
// CODE:
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Phase 1: Detect if there is a cycle
    int tortoise = nums[0];  // Move one step at a time
    int hare = nums[0];      // Move two steps at a time

    do {
        tortoise = nums[tortoise];  // Move one step
        hare = nums[nums[hare]];    // Move two steps
    } while (tortoise != hare);

    // Phase 2: Find the entrance to the cycle
    int ptr1 = nums[0];
    int ptr2 = tortoise;

    while (ptr1 != ptr2) {
        ptr1 = nums[ptr1];
        ptr2 = nums[ptr2];
    }

    return ptr1;
    }
};
