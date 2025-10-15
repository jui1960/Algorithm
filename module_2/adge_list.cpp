// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,e;
//     cin>>n>>e;
//     vector<pair<int,int>>edge_list;

//     while(e--){
//         int a,b;
//         cin>>a>>b;
//         edge_list.push_back({a,b});
//     }

//     for(pair<int,int> p : edge_list){
//         cout<<p.first<<" "<<p.second<<endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> edge_list;
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        edge_list.push_back({a, b});
    }

    for(auto p: edge_list){
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;
}