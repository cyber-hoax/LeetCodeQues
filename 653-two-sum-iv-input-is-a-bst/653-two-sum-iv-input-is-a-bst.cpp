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
    void solve(TreeNode* root, vector<int>& v){
        if(!root) return;
        v.push_back(root->val);
        solve(root->left, v);
        solve(root->right, v);
    }
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int> v;
        unordered_map<int,int> mp;
        solve(root, v);
        
        for(int i = 0 ; i < v.size(); ++i){
            int diff = k - v[i];
            if(mp.find(diff) != mp.end())
                return true;
            else
                mp[v[i]] ++;
        }
        return false;
    }
};