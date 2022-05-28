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
    
    vector<string> binaryTree(TreeNode* root){
        if(!root){
             return {};
            
        }
        
        if(root->left == NULL && root->right ==NULL ){
            return {to_string(root->val)};
        }
        
        vector<string> ans;
        
        vector<string>  left = binaryTree(root->left);
        vector<string> right = binaryTree(root->right);
        
        for(auto x : left ){
            ans.push_back(to_string(root->val)+"->"+x);
        }
        
            for(auto x : right ){
            ans.push_back(to_string(root->val)+"->"+x);
        }
        
        return ans;
        
    }
    
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        
        
        vector<string> v = binaryTree(root);
        
        return v;
        
    }
};


//
/*
            1
           /  \ 
          2     3
            \
              5
*/