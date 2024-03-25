// 442. Find All Duplicates in an Array
// Soltuion:
// CODE:
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> duplicates; // Vector to store duplicates

        // Iterate through the array
        for (int i = 0; i < nums.size(); ++i) {
            int index = abs(nums[i]) - 1; // convert to 0-index

            // If the value at computed index is negative,
            // it means the number has been seen before
            if (nums[index] < 0) {
                // Add the number to duplicates vector (convert back to 1-index)
                duplicates.push_back(index + 1); 
            } else {
                // Mark the number as seen by negating its value
                nums[index] = -nums[index]; 
            }
        }    
        // Return the vector containing duplicates
        return duplicates;
    }
};
