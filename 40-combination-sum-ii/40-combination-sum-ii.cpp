class Solution {
    void pick(int index, int target,vector<int> &ds, vector<int>& candidates,  vector<vector<int>>& ans){
            if(target==0){
                ans.push_back(ds);
                return;
            }
            for(int i=index; i<candidates.size(); i++){
                if(i>index&&candidates[i]==candidates[i-1]) continue;
                if(candidates[i]>target)break;
                ds.push_back(candidates[i]);
                pick(i+1, target-candidates[i], ds, candidates, ans);
                ds.pop_back();
            }
}
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
         vector<vector<int>> ans;
    vector<int> ds;
    sort(candidates.begin(), candidates.end());
    pick(0, target,ds, candidates, ans);
    return ans;
    }
};