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
    
    bool issym(TreeNode* root, TreeNode* curr){
        if(!root && !curr )
            return true;
         if(!root || !curr )
            return false;
        
         return ((root->val == curr->val) && (issym(root->left ,curr->right)) && (issym( root->right,curr->left)))  ; 
    }
               
public:
    bool isSymmetric(TreeNode* root) {
       
        return issym(root->left , root->right);
        
    }
};