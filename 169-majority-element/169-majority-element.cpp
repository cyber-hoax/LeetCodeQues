class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1 ; 
        int first = nums[0];

        for(int i = 1; i <nums.size(); ++i){
            if(nums[i] != first){
                if(count ==0){
                    first = nums[i];
                    count = 1;
                
                }
                else
                    count --;
            }
            else
                count ++ ;
            
        }
        return first ;
    }
};