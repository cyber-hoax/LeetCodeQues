class Solution {
   
public:
    bool canJump(vector<int>& nums) {
       int minj = 0 ;
       for(int i = nums.size()-2; i>=0; --i){
           minj ++;
           if(minj <= nums[i])
               minj = 0 ;
       }
        return minj == 0;
    }
};