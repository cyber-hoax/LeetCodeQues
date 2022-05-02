class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        queue<int> q;
        vector<int> v ;
        
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] % 2 == 0)
                v.push_back(nums[i]);
            else{
                q.push(nums[i]);
            }
        }
        
        while(!q.empty()){
            v.push_back(q.front());
            q.pop();
        }
        
          
      
        return v ;
    }
};