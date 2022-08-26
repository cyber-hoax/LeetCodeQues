class Solution {
public:
    bool canJump(vector<int>& nums) {
        int minj = 0;
        for(int i = nums.size()-2 ; i>=0; --i){
            minj ++ ;
            if(nums[i] >= minj)
                minj = 0;                 
        }
        if(minj == 0)
            return true;
  
        return false;      
        
    }
};