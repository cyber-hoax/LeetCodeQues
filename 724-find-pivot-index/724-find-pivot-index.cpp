class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum =0;
        int leftSum = 0 ;
        for(auto x : nums)
            sum += x;
        
        for(int i = 0 ; i<nums.size();i++){
            sum -= nums[i];
            if(sum == leftSum) return i;
            leftSum += nums[i];
        }
        return -1;
    }
};

/*
    1,7,3,6,5,6
    
*/