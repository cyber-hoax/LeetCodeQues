class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size() /2;
        unordered_map<int,int> s;
        for(auto x : nums )
            s[x] ++;
        
        for(auto x : s){
            if(x.second == n)
                return x.first;
        }
        return 0;
    }
};