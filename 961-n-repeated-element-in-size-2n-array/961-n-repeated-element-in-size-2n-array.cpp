class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
//         int n = nums.size() /2;
//         unordered_map<int,int> s;
//         for(auto x : nums )
//             s[x] ++;
        
//         for(auto x : s){
//             if(x.second == n)
//                 return x.first;
//         }
//         return 0;
        
        for(int i = 2; i < A.size(); ++i){
            if(A[i] == A[i-1] || A[i] == A[i-2])
                return A[i];
        }
        return A[0];
    }
};