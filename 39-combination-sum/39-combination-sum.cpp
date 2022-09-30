class Solution {
    void solve (vector<int>& candidates, int target, vector<vector<int>>&  res , vector<int> temp, int idx ){
       
        if(!target){
            res.push_back(temp);
            return;
        }
        if(target < 0)
            return;
        
         if(idx == candidates.size())
            return;
        
        solve(candidates, target, res, temp, idx+1 );
        temp.push_back(candidates[idx]);
        solve(candidates, target - candidates[idx]  , res, temp, idx );
        temp.pop_back();
        
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> temp;
        sort(candidates.begin(), candidates.end());
        solve(candidates, target, res, temp, 0 );
        return res;
    }
};