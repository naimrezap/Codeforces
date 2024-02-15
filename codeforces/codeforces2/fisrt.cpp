#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{


        ll n;
        cin>>n;
        vector<pair<ll,ll>>v;
        for(int i=0;i<n;i++)
        {
            ll x,y;
            cin>>x>>y;
            v.push_back(make_pair(x,y));
        }
        sort(v.begin(),v.end());
       ll p=0,ans=0;
       for(int i=0;i<n;i++)
       {
           p+=v[i].first;
           ans+=(v[i].second)-p;
       }
       cout<<ans<<endl;


    return 0;
}
