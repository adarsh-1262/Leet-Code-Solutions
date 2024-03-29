// 238. Product of Array Except Self
// Solution:
// CODE:
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftProducts(n, 1); // Initialize arrays to store products from left and right
        vector<int> rightProducts(n, 1);
        vector<int> result(n, 1);

        // Calculate products of all elements to the left of each element
        for(int i = 1; i < n; i++) {
            leftProducts[i] = leftProducts[i - 1] * nums[i - 1];
        }

        // Calculate products of all elements to the right of each element
        for(int i = n - 2; i >= 0; i--) {
            rightProducts[i] = rightProducts[i + 1] * nums[i + 1];
        }

        // Multiply left and right products to get the final result
        for(int i = 0; i < n; i++) {
            result[i] = leftProducts[i] * rightProducts[i];
        }

        return result;
    }
};
