class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
       int sum =0;
        for(auto t: nums)
            sum += t;
        
        sum -= x;
        
        if(sum < 0)
            return -1;
        
        int target = 0 ;
        int j = 0;
        int ans = INT_MIN;
        int n = nums.size() ;
        for(int i=0; i< n; i++){
            target += nums[i];
            while(target> sum){
                target -= nums[j];
                j ++;
            }
            if (target == sum ){
                ans = max(ans, i - j+1);
            }
        }
        return ans == INT_MIN? -1: n-ans;
    }
};