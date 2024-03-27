// 713. Subarray Product Less Than K
// Solution:
// CODE:
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        // Edge cases where no valid subarrays exist or k <= 1
        if (n == 0 || k <= 1) return 0; 
        
        // Initialize left pointer, count of valid subarrays, and product
        int left = 0, count = 0, product = 1;
        // Iterate through the array using right pointer
        for (int right = 0; right < n; ++right) {
            // Update product by multiplying with current element
            product *= nums[right]; 
            
            // Adjust the window by moving the left pointer until the product is less than k
            while (product >= k) {
                // Divide the product by the element at left pointer
                product /= nums[left]; 
                // Move the left pointer to the right
                left++; 
            }
            
            // For each valid window, count the number of subarrays and add it to the total count
            count += (right - left + 1);
        }
        
        return count; // Return the total count of valid subarrays
    }
};
