/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    TreeNode* solve(TreeNode* root, TreeNode* p, TreeNode* q){
        if(!root) return NULL;
        
        if(root == p || root == q)
            return root;
        
        TreeNode* left = solve(root->left, p, q);
        TreeNode* right = solve(root->right, p , q);
        
        if(left == NULL)
            return right;
        else if(right == NULL)
            return left;
        
        return root;
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return solve(root, p, q);
    }
};