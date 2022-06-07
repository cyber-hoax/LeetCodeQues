class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       
     for(int i = n-1, j =nums1.size()-1 ; i>=0; i--, j--){
            nums1[j] = nums2[i];
        }
      
       sort(nums1.begin(), nums1.end());
    }
};