class Solution {
    int helper(vector<int> nums, int s){
        vector<int> dp(s+1, 0);
        dp[0] = 1;
        
        for(int i = 0 ; i< nums.size(); ++i){
            for(int j = s; j>= nums[i]; --j){
                dp[j] += dp[j - nums[i]];
            }
        }
        return dp[s];
    }
public:
      int findTargetSumWays(vector<int>& nums, int S) {
          int sum = accumulate(nums.begin(), nums.end(),0);
          if(sum < abs(S) || (sum + S) % 2 ==1)
              return 0;
          else
              return helper(nums, (sum+S) /2 );
      }
};