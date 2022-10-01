class Solution {
    void solve(vector<int>& nums, vector<vector<int>>& res,  int idx ){
        if(idx == nums.size()){
            res.push_back(nums);
            return;
        }
        
      for (int j = idx; j < nums.size(); j++) {
                swap(nums[idx], nums[j]);
                solve(nums, res, idx+1);
                swap(nums[idx], nums[j]);
            }
       
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        solve(nums, res, 0);
        return res;
    }
};