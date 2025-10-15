// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,e;
//     cin>>n>>e;
//     int a[n];
//     vector<int> adj_mat[n];
//     while(e--){
//         int a,b;
//         cin>>a>>b;
//         adj_mat[a].push_back(b);
//         adj_mat[b].push_back(a);
//     }
//     for (int i = 0; i < n; i++)
//     {
//        cout<<i<<" -> ";
//        for(int x:adj_mat[i]){
//             cout<<x<<" ";
//        }
//        cout<<endl;
//     }
//     // 3 index a thaka vctor tir moddho thaka node print kore
//     // for (int i = 0; i < adj_mat[3].size(); i++)
//     // {
//     //     cout<<adj_mat[3][i]<<" ";
//     // }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adj_list[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        cout<< i <<" -> ";
       for(int x:adj_list[i]){
        cout<<x<<" ";
       }
       cout<<endl;
    }
    

    return 0;
}