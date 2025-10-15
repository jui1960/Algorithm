// // // User Function Template
// // class Solution {
// //   public:
// //   vector<pair<int,int>>adj_list[100005];
// //   int dis[100005];
// //   vector<int>ans;
// //   vector<pair<int,int>>dij;
  
// //   void dijkstra(int src){
// //       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
// //       pq.push({0,src});
// //       dis[src] = 0;
// //       while(!pq.empty()){
// //           pair<int,int> par = pq.top();
// //           pq.pop();
// //           int par_node = par.second;
// //           int par_dis = par.first;
          
// //           for(auto child : adj_list[par_node]){
// //               int child_node = child.first;
// //               int child_dis = child.second;
              
// //               if(par_dis + child_dis < dis[child_node]){
// //                   dis[child_node] = par_dis + child_dis;
// //                   pq.push({dis[child_node],child_node});
// //               }
// //           }
// //       }
      
// //   }
// //     vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
// //         // Code here
// //         for( auto node : edges){
// //             int a = node[0];
// //             int b = node[1];
// //             int c = node[2];
// //             adj_list[a].push_back({b,c});
// //             adj_list[b].push_back({a,c});
// //         }
// //         for(int i = 0; i < V; i++){
// //             dis[i] = INT_MAX;
// //         }
// //         dijkstra(src);
        
// //         for(auto dij : dis)
// //          {
// //             ans.push_back(dij);
// //         }
        
// //         return ans;
// //     }
// // // };


// https://www.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab