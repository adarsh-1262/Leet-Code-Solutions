// 977. Squares of a Sorted Array
// Solution:

// CODE:
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> arr;
        for(int i=0; i<nums.size();i++){
            int a = nums[i]*nums[i];
            arr.push_back(a);
        }
        ranges::sort(arr);
        return arr;
    }
};
