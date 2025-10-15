// class Solution {
// public:
//     vector<int> adj_list[2005];
//     bool vis[2005];
//     bool cycle = false;
//     bool path_vis[2005];

//     void dfs(int src) {
//         vis[src] = true;
//         path_vis[src] = true;

//         for (int child : adj_list[src]) {

//             if (vis[child] && path_vis[child]) {
//                 cycle = true;
//             }
//             if (!vis[child]) {
//                 dfs(child);
//             }
//         }
//         path_vis[src] = false;
//     }

//     bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

//         for (auto &v : prerequisites) {
//             int a = v[0];
//             int b = v[1];
//             adj_list[a].push_back(b);
//         }
//         // memset(vis, false, sizeof(vis));
//         // memset(path_vis, -1, sizeof(path_vis));

//         for (int i = 0; i < numCourses; i++) {
//             if (!vis[i]) {
//                 dfs(i);
//             }
//         }
//         return !cycle;
//     }
// };