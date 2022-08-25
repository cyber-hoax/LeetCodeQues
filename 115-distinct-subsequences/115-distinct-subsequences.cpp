class Solution {
    int helper(string& s, string& t, int ids, int idt, int&n, int&m, vector<vector<int>>& dp ){
         if(idt == m ) return 1;   
            
        if(ids == n) return 0;
       
        
        if(dp[ids][idt] != -1) return dp[ids][idt];
        
        if(s[ids] == t[idt])
            return dp[ids][idt] = helper(s, t, ids+1, idt+1, n, m, dp) + helper(s, t, ids+1, idt, n, m, dp);
                                                                                
        return dp[ids][idt] =  helper(s, t, ids+1,idt, n, m, dp);                                                                        
    }
public:
    int numDistinct(string s, string t) {
        int n = s.size();
        int m = t.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1 , -1));
        return helper(s,t, 0 , 0 , n , m ,dp);
    }
};