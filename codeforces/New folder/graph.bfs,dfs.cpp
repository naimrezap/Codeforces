#include<bits/stdc++.h>
using namespace std;
int n=100000;
vector<int> g[N];
bool vis[N];
void DFS(int ver)
{
    if(vis[ver]) return;
    cout<<ver<<" ";
    vis[ver] = true;
    for(auto child : g[ver])
    {
        if(vis[child]) continue;
        DFS(child);
    }
}
int main()
{

    int v,e;
    cin>>v>>e;
    int v1,v2;
    for(int i=0; i<e; ++i)
    {
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    cout<<"Adjacency List: \n";
    for(int i=1; i<=v; ++i)
    {
        cout<<i<<" : ";
        for(auto child: g[i]) cout<<child<<" ";
        cout<<"\n";
    }
    cout<<"\nDFS traversal: \n";
    DFS(1);
    return 0;
}
