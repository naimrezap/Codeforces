#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define vi vector<int>
#define pb(x) push_back(x)
int graph[1000][1000];
vector<int > vec[10000];
int main()
{
    int v,e;
    cin>>v>>e;
    for(int i=0; i<e; i++)
    {
        int v1,v2,w;
        cin>>v1>>v2;
        graph[v1-1][v2-1]=1;
        graph[v2-1][v1-1]=1;
        vec[v1].push_back(v2);
        vec[v2].push_back(v1);
    }
    cout<<"Matrix\n";
    for(int i=0; i<v; i++)
    {
        for(int j=0; j<v; j++) cout<<graph[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl<<"Adjacency List\n";
    for(int i=1; i<=v; ++i)
    {
        cout<<i<<": ";
        for(auto it : vec[i]) cout<<it<<" ";
        cout<<endl;
    }
    return 0;
}

