class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0, j = 0 ; 
        int n =  prices.size();
        int ans = 0;
        while(j < n){
            if(prices[i] <= prices[j]){
                ans = max(ans, prices[j] - prices[i]);
            
            }else{
                i = j ;
            }
            
            j++ ;
            
        }
        return ans;
    }
};