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
    vector<TreeNode*> v;
    unordered_map<string,int> hm;
    
    string helper(TreeNode* root){
        if(!root)
            return "";
        
        string left = helper(root->left);
        string right = helper(root->right);
        string s = "(" + left + to_string(root->val) + right + ")";
        if(hm[s] == 1){
            v.push_back(root);
        }
        hm[s] ++ ;
        return s;
    }
    
public:
    
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        
        if(!root)
            return v;
       
        helper(root);
        return v;
       
        
    }
};


//  [4,2,1,4,2,3,4]
//  [1,2,1]
//  [3,2,2,3,2]

// 4 null null 2 null 1 4 null null 2 null 3 4 null null

/*
                        5
                      /   \
                    2       1
                  /   \      \                         [2,3,2,1,5,5,3,1,5]             1,2,1
                2      1       5
               /      /  \ 
             5       3     5  
             
             
             first step : preorder array           1 -> 2 -> 1
             second step: array.szie()              3
             third:   if size == 3                  check if 0index or 2index equal if yes [0index]
             
             
             if size>3
             pair check         4,2,1,4,2,3,4
             
             
             
                4,2,4,2,4,3,1
         ser   4,$ null 2  
*/

