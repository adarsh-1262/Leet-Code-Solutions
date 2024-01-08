// 938. Range Sum of BST
// Solution:-

// CODE:
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void printInorder(TreeNode* node, vector<int>& arr) {
        if (node == nullptr)
            return;
        
        // First recur on left child
        printInorder(node->left, arr);
 
        // Then print the data of node
        arr.push_back(node->val);
 
        // Now recur on right child
        printInorder(node->right, arr);
    }

    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int> arr;
        printInorder(root, arr);

        int ans = 0;
        for (int i = 0; i < arr.size(); ++i) {
            if (arr[i] >= low && arr[i] <= high) {
                ans += arr[i];
            }
        }
        return ans;
    }
};
