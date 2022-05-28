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
    int maximumSum(TreeNode* root, int &maxSum){
        if(!root)
            return 0;
        int left = max(0,maximumSum(root->left, maxSum));
        int right = max(0,maximumSum(root->right, maxSum));
        
        maxSum = max(left+right+root->val , maxSum);
        return root->val + max(left,right);
    }
public:
    int maxPathSum(TreeNode* root) {
        int maxSum= INT_MIN;
        maximumSum(root, maxSum);
        return maxSum;
        
    }
};