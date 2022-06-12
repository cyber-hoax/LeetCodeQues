class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> s;
        int  ans = 0;
        for(int i = 0 , j =0 , sum = 0 ; j<  nums.size();j++){
            while(s.find(nums[j]) != s.end()){
              s.erase(nums[i]);
              sum -=  nums[i];
                i++ ;
            }
            {
                s.insert(nums[j]);
                sum += nums[j];
                ans = max(ans, sum);
            }
          
        }

        return ans ;
    } 
};