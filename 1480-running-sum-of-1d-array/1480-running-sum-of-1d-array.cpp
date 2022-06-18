class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int sum = 0;
        for(auto x : nums){
            ans.push_back(sum += x);
        }
        return ans;
    }
};