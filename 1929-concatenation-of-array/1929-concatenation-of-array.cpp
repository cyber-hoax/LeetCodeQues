class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans(nums.size()*2 , 0);
        for(int i = 0 , j = nums.size() ; i<nums.size() && j<nums.size()*2 ; ++j, ++i){
             ans[i] = nums[i];
            ans[j] = nums[i];
        }
         
        return ans;
    }
};