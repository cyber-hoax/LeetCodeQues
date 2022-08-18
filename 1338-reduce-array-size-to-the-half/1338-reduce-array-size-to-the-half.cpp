class Solution {
public:
    int minSetSize(vector<int>& arr) {
        priority_queue<int> q;
        int n = arr.size() /2;
        int res = 0, removed = 0  ;
        
        unordered_map<int,int> mp;
        for(auto x : arr)
            mp[x]++;
        
        for(auto it : mp)
            q.push(it.second);
      
        
        while (removed < n) {
            removed += q.top();
            q.pop();
            res++;
        }
        return res;
    }
};