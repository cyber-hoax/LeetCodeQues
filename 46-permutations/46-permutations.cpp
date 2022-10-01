class Solution {
      void solve(int pos, vector<int> &nums, vector<vector<int>> &res){
        if(pos == nums.size()){
            res.push_back(nums);
            return;
        }
          for(int i = pos ; i<nums.size(); ++i){
              swap(nums[pos], nums[i]);
              solve(pos+1, nums, res);
              swap(nums[pos], nums[i]);
          }
            
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        solve(0,nums, res);
        return res;
    }
};