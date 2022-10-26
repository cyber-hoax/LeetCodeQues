class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto x: nums)
            mp[x] ++;
        int count = 0;
        for(int i = 0; i< nums.size(); ++i){
            if(mp.find(nums[i] -1 ) == mp.end()){
                int temp = nums[i] ;
                while(mp.find(temp) != mp.end())
                    temp ++;
                
                count =  max(count , temp - nums[i]);
            }
        }
        return count;
    }
};