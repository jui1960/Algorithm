#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    vector<int>adj_list[1005];
    while(e--){
        int a,b;
        cin>>a>>b;

        adj_list[a].push_back(b);
        adj_list[b].push_back(b);
        
    }
    int k;
    cin>>k;
    cout<<adj_list[k].size()<<endl;
    return 0;
}