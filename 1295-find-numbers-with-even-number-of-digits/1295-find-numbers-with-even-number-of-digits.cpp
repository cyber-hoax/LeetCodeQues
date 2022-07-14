class Solution {
public:
    int findNumbers(vector<int>& nums) {
//         int ans =0;
        
//         for(auto x : nums){
//             string n = to_string(x);
//             if(n.size() % 2 == 0)
//                 ans ++ ;
//         }
//         return ans;
        
         int res=0;
        for(auto num:nums) {
            res+=(int)log10(num)&1;
        }
        return res;
    }
};