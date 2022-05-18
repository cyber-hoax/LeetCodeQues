class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int> currlist ; 
        vector<vector<int>> anslist;
        
        int index = 0 ; 
        
        subsetUtils(nums, anslist , currlist , index);
        return anslist ;
        
    }
    
    void subsetUtils(vector<int> &nums , vector<vector<int>> &anslist ,vector<int> currlist , int index){
        anslist.push_back(currlist);
        
        for(int i = index ; i< nums.size() ;i++){
            currlist.push_back(nums[i]);
            
            subsetUtils(nums, anslist , currlist , i +1);
            
            currlist.pop_back();
        }
    }
};