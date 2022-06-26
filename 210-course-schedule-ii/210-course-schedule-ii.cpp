class Solution {
public:
   vector<int> findOrder(int num, vector<vector<int>>& pre) {
       int n = num;
        vector<int> adj[num];
        vector<int> deg(num), order;
        for(auto x : pre){
            adj[x[1]].push_back(x[0]);
            deg[x[0]]++;
        }
        queue<int>q;
        for(int i = 0; i<num; i++) {
            if(deg[i] == 0) q.push(i);
        }
        while(!q.empty()){
            int f = q.front();
            q.pop();
            order.push_back(f);
            n--;
            for(auto v : adj[f]){
                if(--deg[v] == 0) q.push(v);
            }
        }
        if(n != 0) return {};
        return order; 
   }
       
//       vector<int> g[A];
//     vector<int> indegree(A,0);
//     vector<int> ans;
//     for(auto x: B){
//         g[x[1]].push_back(x[0]);
//         indegree[x[0]] ++;
//     }

//     queue<int> q;
//     for(int i =1; i<A; i++){
//         if(indegree[i] == 0 )
//             q.push(i);
           
//     }
//     while(!q.empty()){
//         int ele = q.front();
//         q.pop();
//         ans.push_back(ele);
//         A-- ;
//         for(auto child: g[ele]){
//             if(--indegree[child] == 0)
//             q.push(child);
           
//         }
//     }
//     if(A != 0) return {};
//         return ans;   

};