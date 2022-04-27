class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size() ;
        int minValue= prices[0];
        int maxValue = 0;
        
        for(int i = 0 ; i < n ; i++){
            minValue = min(minValue , prices[i]);
            maxValue = max(maxValue , prices[i] - minValue );
        }
        
        return maxValue ;
    }
};