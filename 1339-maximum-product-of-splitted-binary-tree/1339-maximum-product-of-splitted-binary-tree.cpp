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
    long result = 0, total=0, subTreeSum;
        
    int helper(TreeNode* root){
        if (!root ) return 0;
        subTreeSum = root->val+ helper(root->left) + helper(root->right);
        result = max(result, subTreeSum * (total - subTreeSum));
        return subTreeSum;
    }
public:
    int maxProduct(TreeNode* root) {
        
        total = helper(root), helper(root);
        return result % (int)(1e9 +7);
    }
};