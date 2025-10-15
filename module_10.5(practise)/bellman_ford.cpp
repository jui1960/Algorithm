// https://www.geeksforgeeks.org/problems/distance-from-the-source-bellman-ford-algorithm/1

// // User function Template for C++

// class Solution {
//   public:
//     vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
//         // Code here
//         const int INF = 1e8;
//         vector<int>dist(V,INF);
//         dist[src]= 0;
        
//         for(int i = 0; i<V-1;i++){
//             for(auto &ed : edges){
//                 int u = ed[0];
//                 int v = ed[1];
//                 int w = ed[2];
                
//                 if(dist[u]!=INF && dist[u]+w < dist[v]){
//                     dist[v]= dist[u]+w;
//                 }
//             }
//         }
//         bool cycle = false;
        
//         for(auto &ed : edges){
//             int u = ed[0];
//             int v = ed[1];
//             int w = ed[2];
            
//             if(dist[u]!=INF && dist[u]+w <dist[v]){
//                 cycle = true;
//                 break;
//             }
//         }
//         if(cycle)
//           return {-1};
//         else
//             return dist;
            
        
        
        
//     }
// };
