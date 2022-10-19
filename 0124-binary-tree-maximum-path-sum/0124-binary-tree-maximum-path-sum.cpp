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
    int maxm  = INT_MIN;
    int solve(TreeNode* root){
        if(!root)
            return 0;
        
        int left = max(solve(root->left), 0) ;
        int right = max(solve(root->right),0);
        int maxpath = root->val + left +right;
        maxm =max(maxm,maxpath);
        return root->val+max(left,right);
       
    }
public:
    int maxPathSum(TreeNode* root) {
        solve(root);
        return maxm;
    }
};