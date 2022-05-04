class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int count = 0 ;
        unordered_map<int,int> hm ;
        for(auto i : nums)
            hm[i] ++;
        
        for(auto x: hm){
            if(k== 0 ){
                if(x.second > 1)
                    count ++ ;
            }
            else if(hm.find(x.first + k) != hm.end())
                count ++ ;
               
            
        }
        
           return count ; 
        
    }
};