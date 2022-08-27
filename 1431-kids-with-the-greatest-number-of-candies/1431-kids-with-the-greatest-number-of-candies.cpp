class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int maxC = 1;
        for(auto x: candies)
            maxC = max(maxC, x);
        
        for(int i = 0; i< candies.size(); ++i){
            if(candies[i] + extraCandies >= maxC)
                ans.push_back(true);
            else
                ans.push_back(false);
        }
        return ans;
    }
};