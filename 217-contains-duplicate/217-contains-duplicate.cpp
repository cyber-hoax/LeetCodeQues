class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> v;
        
        for(int i = 0 ; i <nums.size() ; i++){
            v[nums[i]] ++ ;
        }
        
        for(auto x : v){
            if(x.second > 1)
                return true;
        }
        
        return false; 
        
    }
};