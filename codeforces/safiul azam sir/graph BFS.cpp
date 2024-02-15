#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    int n,m;
    cin>>n>>m;
    vector<int>v[n];
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);

    }
    vector<bool>vis(n,false);
    vector<int>ans;
    queue<int>q;
    vis[0]=true;
    q.push(0);
    while(!q.empty())
    {

        int f=q.front();
        q.pop();
        ans.push_back(f);
        for(int t: v[f])
        {
            if(!vis[t])
            {
                vis[t]=true;
                q.push(t);
            }

        }
    }
    for(auto x: ans)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;




}
