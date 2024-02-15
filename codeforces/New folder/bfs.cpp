
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5+10;
vector<int> g[N];
bool vis[N];
void BFS( int ver)
{
    queue<int> q;
    q.push(ver);
    vis[ver] = true;
    while(!q.empty())
    {
        int cur = q.front();
        q.pop();
        cout<<cur<<" ";
        for(auto child : g[cur])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child] = true;
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int v1,v2;
    for(int i=0;i<n-1;i++)
    {
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    BFS(1);
    return 0;
}
