#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[1005];
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
    

        for (int child : adj_list[par])
        {
            if (!vis[child])
            {
                vis[child] = true;
                q.push(child);
            }
        }
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--){
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);

    }
    memset(vis, false, sizeof(vis));
    int component = 0;
    for(int i = 0; i<n;i++){
        if(!vis[i]){
            bfs(i);
            component++;
        }
    }

    cout<<component<<endl;

    return 0;
}