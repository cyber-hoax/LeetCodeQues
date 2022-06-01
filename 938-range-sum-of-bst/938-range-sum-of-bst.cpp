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
    void rangeSum(TreeNode* root, int low, int high, int &sum){
        if(root == NULL){
            return;
        }
        if(root->val >= low && root->val <= high)
            sum += root->val;
        
        rangeSum(root->left, low, high, sum);
        rangeSum(root->right, low, high, sum);
    }
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0 ;
        rangeSum(root, low, high, sum);
        return sum;
        
        
    }
};