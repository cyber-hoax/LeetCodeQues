class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       // unordered_set<int> st;
       //  for(auto x: nums)
       //      st.insert(x);
       // for(int i = 1 ; i < INT_MAX; ++i){
       //     if(st.find(i) == st.end())
       //         return i;
       // } 
       //  return 0;
        int n = nums.size();
        for(int i =0; i<n; ++i){
            while(nums[i] > 0 && nums[i] <= n && nums[nums[i]-1] != nums[i])
                swap(nums[i], nums[nums[i]-1]);
        }
        
        for(int i = 0; i < n; ++i){
            if(nums[i] != i+1)
                return i +1;
        }
        return n+1;
        
    }
};