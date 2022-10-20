class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       if(nums.size() == 1) return 1;
        int l , r;
        for(l = 0 , r = 1 ; r < nums.size(); ++r){
            if(nums[l] != nums[r])
                l++;
            nums[l] = nums[r];
        }
        return l+1;
        }
};