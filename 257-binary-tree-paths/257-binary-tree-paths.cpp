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
    string helper(TreeNode* root,  vector<string> &ans , string s){
        if(!root)
            return  "";
      
        s += to_string(root->val) + "->";
        
        if(root->left == NULL && root->right == NULL){
            s.pop_back();
            s.pop_back();
            ans.push_back(s);
        }
        
        return helper(root->left, ans,s), helper(root->right, ans,s);
    
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string s ="";
        helper(root, ans,s);
        return ans;
        
    }
};