class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> hm;
        
        for(auto x : nums){
            if(hm.find(x) != hm.end()){
                return true;
            } 
            hm[x] ++ ;
    }
        return false;
        
    }
    
};