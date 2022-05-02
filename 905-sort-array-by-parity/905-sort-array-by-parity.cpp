class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
//         queue<int> q;
//         vector<int> v ;
        int j = 0 ;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] % 2 == 0){
            //     v.push_back(nums[i]);
            // else{
            //     q.push(nums[i]);
                swap(nums[i], nums[j]);
                j++ ; 
            }
            }
        
        
      
          
      
        return nums ;
    }
};