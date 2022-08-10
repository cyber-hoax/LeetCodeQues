class Solution {
    
int help(vector<vector<int> > &A, vector<vector<int>>& dp, int i, int row){
    

    if(dp[i+1][row] != INT_MAX) return dp[i+1][row];

    if(row== A.size()) return 0;
    int minm = INT_MAX;
    for(int k = 0 ; k<A[row].size(); ++k){
        if(k == i)
        continue;

        else
        minm = min(minm, A[row][k] + help(A, dp, k , row+1));
    }
    return dp[i+1][row] =minm;
}
public:
    int minFallingPathSum(vector<vector<int>>& A) {
 vector<vector<int>> dp(202, vector<int>(202,INT_MAX));
    return help(A, dp , -1, 0 );
    }
};