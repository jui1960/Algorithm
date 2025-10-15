// class Solution {
//   public:
//     vector<int> adj_list[100005];
//     bool vis[100005];
//     int parent[100005];
//     bool cycle;
    
    
//     void dfs(int src){
//         vis[src]= true;
//         for(int child : adj_list[src]){
//             if(vis[child] && parent[src] != child){
//                 cycle = true;
//             }
//             if(!vis[child]){
//                 parent[child] = src;
//                 dfs(child);
//             }
//         }
//     }
//     bool isCycle(int V, vector<vector<int>>& edges) {
//         // Code here
//     for(auto v : edges){
//         int a = v[0];
//         int b = v[1];
//         adj_list[a].push_back(b);
//         adj_list[b].push_back(a);
//     }
//     memset(vis,false,sizeof(vis));
//     memset(parent,-1,sizeof(parent));
//     cycle = false;
//     for(int i = 0; i<V;i++){
//        if(!vis[i])
//             dfs(i);
//     }
        
//       return cycle;
//     }
// };

