// class Solution {
//   public:
//     vector<int> adj_list[100005];
//     bool vis[100005];
//     int parent[100005];
//     bool cycle;
    
    
//     void bfs(int src){
//         queue<int>q;
//         q.push(src);
//         vis[src]=true;
//         while(!q.empty()){
//             int par = q.front();
//             q.pop();
            
//             for(int child : adj_list[par]){
//                 if(vis[child] && parent[par] != child){
//                     cycle = true;
//                 }
//                 if(!vis[child]){
//                     q.push(child);
//                     vis[child]= true;
//                     parent[child]=par;
//                 } 
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
//             bfs(i);
//     }
        
//       return cycle;
//     }
// };

