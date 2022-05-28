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
    
    vector<string> paths ;
    void topDown (TreeNode* root, string s){
        if(!root){
            return ;
        }
        
        
          string temp = s+ (s.length() == 0  ? "" :  "->")+to_string(root->val);
        if(root->left == NULL && root->right ==NULL ){
            paths.push_back(temp);
            return ;
        }
        
         topDown(root->left, temp);
        topDown(root->right, temp);
        
        
        
        
    }
    
    
    
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        
        
//         vector<string> v = binaryTree(root);
        topDown(root, "");
        
        return paths;
        
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