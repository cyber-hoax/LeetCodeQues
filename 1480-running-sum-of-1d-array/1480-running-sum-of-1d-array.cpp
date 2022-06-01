class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> v ;
        int sum = 0 ;
         for(auto x : nums){
             v.push_back(sum += x);
             
         }
        
        return v;
    }
};