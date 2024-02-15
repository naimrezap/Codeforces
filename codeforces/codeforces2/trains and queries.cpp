#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        ll x,y;
        cin>>x>>y;
        map<ll,vector<ll>>mp;
        for(int i=0;i<x;i++)
        {
            ll p;
            cin>>p;
            mp[p].push_back(i);
        }
       while(y--)
       {
           ll a,b;
           cin>>a>>b;
           if(mp[a].empty() || mp[b].empty())
            cout<<"NO"<<endl;
           else if(mp[a].front()<=mp[b].back())
            cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
       }

    }
    return 0;

}
