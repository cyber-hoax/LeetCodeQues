class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
           vector<int> color(graph.size(),0);
    queue<int> q;
    for(int i = 0; i<graph.size(); i++){
        if(color[i]) continue;

        color[i] = 1;
        q.push(i) ;

        while(!q.empty()){
            int temp = q.front();
            q.pop();
            
            for(auto child : graph[temp]){
                if(!color[child]){
                    color[child] = -color[temp];
                    q.push(child);
                }
                else if(color[child] == color[temp])
                    return false;
            }
        }
    }
    return true;
    }
};