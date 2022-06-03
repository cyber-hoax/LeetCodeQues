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
    bool helper(TreeNode* root, int targetSum, int sum){
        if(!root)
            return false ;
        
        sum += root->val;
        if(root->left == NULL && root->right ==NULL && targetSum == sum)
            return true;
        
       return  helper(root->left , targetSum, sum) || helper(root->right , targetSum ,sum) ; 
         
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
       if(!root)
           return false;
        
        return helper(root, targetSum, 0 );
      
    }
};