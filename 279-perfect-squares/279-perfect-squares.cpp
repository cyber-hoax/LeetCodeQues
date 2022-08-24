class Solution {
public:
    int numSquares(int A) {
      
    vector<int> dp(A+1, 0 );

        for (int i = 1; i <= A; i++)
        {
            int minm= INT_MAX;
            for (int j = 1; j * j <= i; j++)
            {
                minm= min(minm, dp[i - j * j] + 1);
            }
            dp[i] = minm;
        }
        return dp[A];



    }
};