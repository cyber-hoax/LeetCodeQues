class Solution {
    int t[1001][1001];
    int solve(string &x, string &y, int n, int m){
        if(n==0 || m==0)
            return t[n][m]=0;
        if(t[n][m]!=-1) return t[n][m];
        if(x[n-1]==y[m-1]){
            return t[n][m]=1+solve(x,y,n-1,m-1);
        }
        else{
            return t[n][m]=max(solve(x,y,n,m-1),solve(x,y,n-1,m));
        }
        return 0;
    }
public:
    int longestCommonSubsequence(string text1, string text2) {
          int n = text1.size();
        int m = text2.size();
        memset(t,-1,sizeof(t));
        return solve(text1,text2,n,m);
    }
};



//// #include <bits/stdc++.h>
// class Solution {

//     int dp[1001][1001];
// int LCS(string A, string B, int m , int  n){
//     if(n == 0 || m == 0)
//         return 0;
//     if(dp[m-1][n-1] != -1)
//         return dp[m-1][n-1];
//     if(A[m-1] == B[n-1])
//         return dp[m-1][n-1] = 1  + LCS(A,B ,m-1,n-1);
    
//     else
        
//         return dp[m-1][n-1] = max(LCS(A,B, m-1,n), LCS(A,B,m,n-1));
    
// //    return LCS(A,B,n,m-);
// }
// public:
//     int longestCommonSubsequence(string t1, string t2) {
        
//         int m = t1.size();
//         int n = t2.size();
        
     
//         memset(dp, -1, sizeof(dp));
//         return LCS(t1,t2,m,n);
//     }
// };
