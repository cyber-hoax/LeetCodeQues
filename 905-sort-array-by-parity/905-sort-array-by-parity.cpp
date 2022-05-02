class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        stack<int> even;
        stack<int> odd ;
        vector<int> v ;
        
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] % 2 == 0)
                even.push(nums[i]);
            else{
                odd.push(nums[i]);
            }
        }
        
        while(!even.empty()){
            v.push_back(even.top());
            even.pop();
        }
        
          
        while(!odd.empty()){
            v.push_back(odd.top());
            odd.pop();
        }
        
        return v ;
    }
};