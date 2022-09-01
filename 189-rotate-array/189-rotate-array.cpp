class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        
        int n = nums.size();
         int times = k % n;
        int leftSideLeft = 0, leftSideRight = n - times - 1;
        int rightSideLeft = n-times , rightSideRight = n -1;
        
        
      cout << leftSideRight ;
        
        while(leftSideLeft<leftSideRight){
            swap(nums[leftSideLeft++], nums[leftSideRight--]);
        }
        
        while(rightSideLeft < rightSideRight)
            swap(nums[rightSideRight--], nums[rightSideLeft++]);
        
      
         int i =0 ,j =nums.size()-1;
        while(i<j)
            swap(nums[i++],(nums[j--]));
    
    }
};


// num size =4  13
// 13 % 4