class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int curr = 0 ;
        
        for(int i = 0 ; i <nums.size() ; i++){
            curr += nums[i];
            if(curr> maxSum){
                maxSum = max(curr, maxSum);
            }
          if(curr < 0){
              curr = 0 ;
          }
        }
        return maxSum ;
    }
};