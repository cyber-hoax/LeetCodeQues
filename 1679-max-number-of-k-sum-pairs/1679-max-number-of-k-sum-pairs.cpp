class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
    int count = 0 ;
    unordered_map<int , int> hm;
    
    for(auto x : nums){
        int curr = k - x ;
        if(hm[curr] > 0){
            count ++;
            hm[curr] -- ;
        }
        else
        hm[x] ++ ;
    }
    
    return count ;
    }
};