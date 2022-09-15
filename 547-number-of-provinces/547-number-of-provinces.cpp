class Solution {
private:
    void dfs(vector<vector<int>>& adj, vector<int>  &vis, int node){
        vis[node] = 1;
        for(int i = 0 ; i<adj.size(); ++i){
            if(adj[node][i] == 1 && !vis[i])
                dfs(adj, vis, i);
        }
    }
public:
    int findCircleNum(vector<vector<int>>& adj) {
        int v = adj.size();
        vector<int>  vis(v ,0);
        int count = 0 ;
        for(int i = 0 ; i < v ; ++i){
            if(!vis[i]){
                count ++;
                dfs(adj, vis, i);
            }
        }
        return count;
    }
};