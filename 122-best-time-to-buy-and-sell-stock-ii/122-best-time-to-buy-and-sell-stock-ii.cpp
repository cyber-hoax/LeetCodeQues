class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int start = 0 , end =1, n=prices.size();
        while(end<n){
            if(prices[start] >= prices[end])
                start = end;
            else 
                ans +=prices[end]- prices[start];
                start = end;
                end ++;           
        }
        return ans;
       
    }
};