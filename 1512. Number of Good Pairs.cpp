//1512. Number of Good Pairs
// solution

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        for (int i=0;i<n;i++){
            for(int j=1;j<n;j++){
                if(nums[i]==nums[j]){
                    if(i<j){
                        count=count+1;
                    }
                }
            }
        }
        return count;
    }
};
