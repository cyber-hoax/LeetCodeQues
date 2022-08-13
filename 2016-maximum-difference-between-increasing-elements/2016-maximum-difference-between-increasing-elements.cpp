class Solution {
public:
    int maximumDifference(vector<int>& prices) {
        int ans = -1;
        int start = 0 , end =1, n=prices.size();
        while(end<n){
            if(prices[start] >= prices[end])
                start = end;
            else 
                ans = max(ans, prices[end]- prices[start]);
                end ++;           
        }
        return ans;
    }
};