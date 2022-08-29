class Solution {
public:
    int minIncrementForUnique(vector<int>& A) {
        sort(A.begin(), A.end());
         int count = 0 ;
    for(int i = 1; i<A.size(); ++i){
        if(A[i-1] == A[i] ){
            A[i] ++;
            count ++ ;
        }
        else if(A[i-1] > A[i]){
            int temp = A[i];
            A[i] = A[i-1] +1;
            count += A[i] - temp;
        }
    }
    return count ;
    }
};