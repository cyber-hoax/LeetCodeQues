class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size()  ;
        int start = 0 , end = n-1 , pos = n-1; 
        vector<int> ans(n);
        while(start <= end) {
            if(abs(nums[start]) < abs(nums[end])){
                ans[pos--] = nums[end] * nums[end];
                end-- ;
            }
            else{
                ans[pos--] = nums[start] * nums[start];
                start ++;
            }
        }   
        return ans;    
    }
};