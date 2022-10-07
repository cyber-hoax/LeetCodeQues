class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = -1 , end = -1 ;
        bool check = false;
        for(int i = 0 ; i < nums.size(); ++i){
            if(nums[i] == target){
                if(check)
                    end = i;
                else{
                    start = i;
                    check = true;
                    end = i;
                }
                    
            }
        }
        return {start,end};
        }
        
};