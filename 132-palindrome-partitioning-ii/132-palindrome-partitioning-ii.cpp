class Solution {
    int isPalindrome(string& s, int i, int j){
        while(i<j){
            if(s[i] != s[j]) return false;
            
            else{
                i++ ;
                j-- ;
            }
        }
        return true;
    }
    
    int helper(string& s, vector<int>& dp, int i, int n){
        if(i == n) return 0;
        
        if(dp[i] != -1) return dp[i];
        
        int cuts = INT_MAX;
        for(int j = i; j<n; ++j){
            if(isPalindrome(s, i, j)){
                int cost = 1 + helper(s, dp, j+1, n);
                cuts = min(cost, cuts);
            }
        }
        return dp[i] = cuts;
    }
public:
    int minCut(string s) {
        int n = s.size();
        vector<int> dp(n, -1);
        return helper(s, dp, 0, n) -1 ;
    }
};