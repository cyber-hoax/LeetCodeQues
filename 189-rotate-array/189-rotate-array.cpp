class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int i = 0 , j = nums.size()-1;
        while(i<j){
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
        
        k %= nums.size();
        i= 0;
        j = k-1;
        while(i<j){
             swap(nums[i], nums[j]);
            i++;
            j--;
        }
        
        i = k;
        j = nums.size()-1;
        
         while(i<j){
             swap(nums[i], nums[j]);
            i++;
            j--;
        }
    }
};