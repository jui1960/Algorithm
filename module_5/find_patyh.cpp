#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[100040];
bool vis[100040];

void dfs(int src)
{
    vis[src] = true;
    for (int child : adj_list[src])
    {
        if (!vis[child])    
        {
            dfs(child);
        }
    }
}
int main()
{

    for (int i = 0; i < edge.sise(); i++)
    {
        int a = edge[i][0];
        int b = edge[i][1];
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    memset(adj_list, false, sizeof(adj_list));

    dfs(0);

    return 0;
}
m