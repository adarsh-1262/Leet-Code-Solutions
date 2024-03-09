// 2540. Minimum Common Value
// Solution:
// CODE:
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        // Initialising pointers:
        int i = 0;
        int j = 0;

        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] == nums2[j]){
                return nums1[i]; // found the common element:
            }
            else if(nums1[i] < nums2[j]){
                i++;  // moving pointer in nums1:
            }
            else{
                j++;  // moving pointer in nums2:
            }
        }
        return -1;
    }
};
