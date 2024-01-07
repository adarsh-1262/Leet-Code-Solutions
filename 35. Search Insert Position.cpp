// 35. Search Insert Position
// Solution:-

// CODE:
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int low = 0;
        int high = nums.size()-1;
        int mid=0;
        int ans;
        
        while(low <= high){
            mid = (low+high)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        if(target < nums[mid]){
            ans = mid ;
        }else 
            ans = mid+1;
        return ans;  
    }
};