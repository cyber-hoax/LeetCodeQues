class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        priority_queue<int> q;
        for(auto x: candies)
            q.push(x);
        
        for(int i = 0; i< candies.size(); ++i){
            if(candies[i] + extraCandies >= q.top())
                ans.push_back(true);
            else
                ans.push_back(false);
        }
        return ans;
    }
};