#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
void bfs(int src)
{
    queue<int> q;
    q.push(src);

    vis[src] = true;
    int count = 0;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        count++; 

        for (int child : adj_list[par])
        {
            if (!vis[child])
            {
                vis[child] = true;
                q.push(child);
            }
        }
    }
    cout<<count<<endl;
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    int N; // user dibe,,n theke kon kon node a jawa jai
    cin>>N;
    bfs(N);
    return 0;
}