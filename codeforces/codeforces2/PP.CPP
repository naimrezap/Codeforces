#include<bits/stdc++.h>
#define int1 long long
using namespace std;

int main()
{

    int1 t;
    cin>>t;
    while(t--)
    {
        int1 n;
        cin>>n;
        vector<int1>v(n+1),v1(n+1);
       // cin>>v[i];
       unordered_map<int1,int1>mp,mp1;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int1 i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        int1 cc=1,a1,a2,ans=0,ans1=0;
        for(int1 i=1;i<=n;i++)
        {
            if(i==n) {mp[v[i-1]]=max(cc,mp[v[i-1]]);break;}
            else if(v[i-1]==v[i]) cc++;
            else
            {
                mp[v[i-1]]=max(cc,mp[v[i-1]]); cc=1;
            }
        }
        cc=1;
        for(int1 i=1;i<=n;i++)
        {
            if(i==n) {mp1[v1[i-1]]=max(cc,mp1[v1[i-1]]);break;}
            else if(v1[i-1]==v1[i]) cc++;
            else
            {
                mp1[v1[i-1]]=max(cc,mp1[v1[i-1]]); cc=1;
            }
        }

        for(auto aa: v)
        {
            ans=max(ans,mp[aa]+mp1[aa]);
        }
         for(auto aa1: v1)
        {
            ans=max(ans,mp[aa1]+mp1[aa1]);
        }
        cout<<ans<<endl;




    }
    return 0;
}
