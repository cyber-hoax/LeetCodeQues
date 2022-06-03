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
    void helper(TreeNode* root, int targetSum, int sum, vector<int> sumpath, vector<vector<int>> & ans ){
        if(!root)
            return;
        
        sum += root->val;
        sumpath.push_back(root->val);
        
        if(root->left == NULL && root->right == NULL && targetSum == sum){
            ans.push_back(sumpath);
        }
        
        helper(root->left, targetSum, sum, sumpath , ans);
        //sumpath.pop_back();
        helper(root->right, targetSum, sum, sumpath , ans);
        
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
       
        vector<int> sumpath;
        vector<vector<int>> ans;
        helper(root, targetSum, 0 , sumpath, ans);
        return ans;
    }
};