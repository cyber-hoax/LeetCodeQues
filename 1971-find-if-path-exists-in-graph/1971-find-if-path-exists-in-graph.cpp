class Solution {
     vector<int> graph[200001];
    
    void dfs(int start, vector<bool>&vis){
        vis[start] = true;
        
        for(auto neighbour : graph[start]){
            if(!vis[neighbour] and neighbour != start)
                dfs(neighbour, vis);
        }
    }
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
         for(int i=0; i<edges.size(); i++){
            int u = edges[i][0];           
            int v = edges[i][1];
            graph[u].push_back(v);      
            graph[v].push_back(u);
        }
        vector<bool>vis(n, false);
        dfs(source, vis);
        
        return (vis[destination] == true);
    }
};