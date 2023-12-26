// 1480. Running Sum of 1d Array
// Solution:

// CODE:
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>ans;
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum = sum + nums[i];
            ans.push_back(sum);
        }
        return ans;
    }
};
