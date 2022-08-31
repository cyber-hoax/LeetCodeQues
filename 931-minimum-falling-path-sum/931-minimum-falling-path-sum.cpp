class Solution {
    int solve(vector<vector<int>>& matrix, int r, int c, vector<vector<int>>& dp ){
        if(r == 0 and c < matrix[0].size() and c >= 0) return matrix[r][c]; 
        if(c >= matrix[0].size() or c < 0) return INT_MAX;
        
        if(dp[r][c] != INT_MAX) return dp[r][c];
        
        return dp[r][c] = matrix[r][c] + min(min(solve(matrix,r-1,c+1,dp), solve(matrix, r-1,c,dp)), solve(matrix,r-1, c-1, dp));
    }
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<int>> dp(row+1, vector<int> (col+1, INT_MAX));
        int minm = INT_MAX;
        
        for(int i = 0 ; i<col; ++i){
            minm = min(minm, solve(matrix, row-1, i ,dp));
        }
        return minm;
    }
};