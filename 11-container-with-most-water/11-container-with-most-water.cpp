class Solution {
public:
    int maxArea(vector<int>& height) {
        int l= 0 , r= height.size()-1;
        int ans = 0 ; 
        while(l<r){
            int h = min(height[l], height[r]);
            int temp = (r-l) * h;
            ans = max(ans, temp);
            if(height[l] < height[r]){
                 l++ ;
            }
               
            else {r-- ;
                 }
        }
        return ans;
    }
};