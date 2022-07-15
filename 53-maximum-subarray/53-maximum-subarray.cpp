class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = INT_MIN;
        int curr = 0 ;
        for(int i =0; i<nums.size(); i++){
            curr += nums[i];
            sum = max(sum, curr);
            if(curr< 0)
                curr = 0;
        }
        return sum == INT_MIN ? 1 : sum;
        
    }
};