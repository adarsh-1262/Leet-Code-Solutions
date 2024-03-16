// 525. Contiguous Array
// Solution:
// CODE:
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int curr_sum = 0;
        int maxLength = 0;
        unordered_map<int, int> prefixToIndex;
        prefixToIndex[0] = -1;

        for(int i = 0; i < nums.size(); i++){
            curr_sum += nums[i] == 1 ? 1 : -1;

            if(prefixToIndex.count(curr_sum)) {
                maxLength = max(maxLength, i - prefixToIndex[curr_sum]);
            }else{
                prefixToIndex[curr_sum] = i;
            }
        }
        return maxLength;
    }
};
