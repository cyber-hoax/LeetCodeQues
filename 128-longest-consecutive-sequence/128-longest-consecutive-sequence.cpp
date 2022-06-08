class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
//        int n = nums.size();
//     unordered_set<int> sl ;
  
//     int ans = 0 ;
//     for(int i = 0 ; i<n ; i++){
        
//         sl.insert(nums[i]);
//     }
//     for(int j = 0 ; j < n ; j++){
        
//         if(sl.find(nums[j] -1) == sl.end()){
            
//             int k = nums[j];
            
//             while(sl.find(k) != sl.end())
//                 k++;
//             ans = max(ans, k - nums[j]);     
//         }
//     }
//     return ans;
        
        set<int> s;
        int count = 1;
        int maxm = 1;
        if(nums.size() == 0)
            return 0;
        for(auto x : nums)
            s.insert(x);
        
        for(auto k : s){
            if(s.find(k+1) != s.end())
                count ++ ;
             else{
            maxm = max(count, maxm);
            count = 1 ;
         
            }
        }
       
            
        return maxm ;
    }
};