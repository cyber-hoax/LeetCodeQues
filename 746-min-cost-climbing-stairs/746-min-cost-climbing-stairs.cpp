class Solution {
public:
    int minCostClimbingStairs(vector<int>& A) {
    for(int i = 2; i < A.size(); ++i){
        A[i] += min(A[i-1]  , A[i-2]);
        
    }
        return min(A[A.size()-1] , A[A.size()-2]);
    }
};