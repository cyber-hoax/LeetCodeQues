class Solution {
public:
    void dfs(vector<vector<int>> &rooms, int i, int &c, vector<int> &vis ){
        if(vis[i] ==1)
            return ;
        vis[i] =1;
        c++ ;
        for(auto x : rooms[i]){
            dfs(rooms, x, c, vis);
        }
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        int c = 0 ;
        vector<int>  vis(n, 0 );
        dfs(rooms, 0, c, vis);
        
        if(n == c)
            return true;
        else
            return false;
    }
};