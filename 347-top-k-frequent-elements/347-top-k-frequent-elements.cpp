class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(auto x : nums)
            mp[x] ++;
        
        vector<vector<int>> bucket(nums.size()+1);
        vector<int>ans;
        for(auto [a,b] : mp)
            bucket[b].push_back(a);
        
        for(int i = nums.size(); k; --i){
            for (auto a : bucket[i]) {
                ans.push_back(a);
                k--;
            }
        }
        return ans;
    }
};