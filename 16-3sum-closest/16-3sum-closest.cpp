class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int sum  = nums[0] + nums[1] + nums[2];
     
        for(int low=0 ; low<nums.size() -2; ++low){
            int start = low+1;
            int end = nums.size()-1;
            while(start < end ){
                int temp = nums[low] + nums[start] + nums[end];
                 if(abs(temp-target) < abs(sum-target) ) sum=temp;
                if(temp>target){
                    end--;                 
                } else if(temp<target){
                    start++;            
                }else return target;
            }
            
        }
        return sum;
    }
};