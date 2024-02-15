#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000
 vector<bool>vis(MAX);
    vector<int>ans;
    vector<int>v[MAX];
    void dfs(int x)
    {
        vis[x]=true;
        cout<<x<<" ";
        for(auto a: v[x])
        {
            if(!vis[a])
            {
                dfs(a);
            }
        }
    }
int main()
{

    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);

    }
    dfs(0);



    return 0;




}
