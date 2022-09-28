class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = nums[0];
        int minprod = nums[0];
        int maxprod = nums[0];
        
        for(int i = 1; i <nums.size(); ++i){
            if(nums[i] < 0)
                swap(maxprod, minprod);
            
            minprod = min(minprod * nums[i] , nums[i]);
            maxprod = max(maxprod * nums[i], nums[i]);
            
            if(maxprod> ans)
                ans = maxprod;
        }
        return ans;
    }
};