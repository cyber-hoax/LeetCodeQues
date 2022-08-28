class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto x : nums)
            mp[x] ++;
        vector<int> ans;
        for(auto x : nums){
            int count = 0 ;
            for(auto t: mp){
                if(x > t.first)
                    count += t.second;
            }
            ans.push_back(count);
        }
        return ans; 
    }
};