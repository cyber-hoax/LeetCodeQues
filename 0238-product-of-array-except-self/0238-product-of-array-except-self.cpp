class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pref = 1;
        vector<int> v;
        v.push_back(1);
        for(int i = 1 ; i < nums.size(); ++i){
            int temp = pref * nums[i-1]  ;
            v.push_back(temp);
            pref = temp;
        }
        
        int suff = 1;
        for(int i = nums.size() -1 ; i>= 0; --i){
            int temp = v[i] * suff;
            v[i] = temp;
            suff *= nums[i]  ;
        }     
   return v; 
    }
};