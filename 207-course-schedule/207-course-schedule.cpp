class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<int> g[n];
        vector<int> indegree(n, 0);
        
        for(auto x: pre){
            g[x[1]].push_back(x[0]);
            indegree[x[0]] ++;
        }
        
        queue<int>q;
        for(int i = 0; i<n; i++){
            if(indegree[i] == 0)
                q.push(i);
        }
        
        while(!q.empty()){
            int ele = q.front();
            q.pop();
            n--;
            for(auto child : g[ele]){
                if(--indegree[child] == 0) q.push(child);
            }
        }
        return n==0;
    }
};