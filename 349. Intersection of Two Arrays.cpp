// 349. Intersection of Two Arrays
// Solution:
// CODE:
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // initialising unordered set and a vector variable
        unordered_set<int> set(nums1.begin(), nums1.end());
        vector<int> ans;

        // iterating over nums2 array by using this for loop
        for(int i =0; i< nums2.size(); i++){
            int num = nums2[i];
            // checking if the num is available in the set or not,
            // which is already populated with elements from nums1 array.
            if(set.count(num)){
                // if element is found then we will push it in the array ans
                ans.push_back(num);
                // and now we will erase that element from the set for maintaining the uniqueness.
                set.erase(num);
            }
        }
        // finally we will return the ans array 
        return ans;
    }
};
