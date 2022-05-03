class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size() ;
        vector<int> v ;
    for(int i = 0 ; i < n ; i++){
    
        v.push_back(nums[i]);
    }
    
    sort(v.begin() , v.end());  //sort vector
    
    int start = -1 ;           //start with -1 since 0 incex can also be unsorted
    int end = 0 ;
    
    for( int i= 0 ;i< n ; i++){
        if(nums[i] != v[i]){
            if(start < 0)
                start = i ;
            else
                end=i;     
        }
    }
        
    if(end == 0){
        return  0 ;
    }
    return end - start+1 ;
    }
};