class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      int sum = 0;
      int ans = 0;
        unordered_map<int,int> mp;
        mp[sum] = 1;
        
        for(auto x: nums){
            sum += x;
            ans += mp[sum -k];
            mp[sum]++;
        }
        return ans;
    }
};