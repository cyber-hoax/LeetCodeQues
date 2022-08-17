class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int> dp(amount+1, 0);
        dp[0] = 1;
        
        for(int i=0 ; i<coins.size(); ++i){
            int j = coins[i];
            while(j<= amount){
                dp[j] += dp[j - coins[i]];
                j++;
            }
        }
        return dp[amount];
    }
};