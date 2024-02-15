#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll>v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        vector<ll>v1,v2;
        sort(v.begin(),v.end());
        ll i=0;
        while(i<n)
        {
            if(v[i]<=0)
                v1.push_back(v[i]);
            else v2.push_back(v[i]);
        }
        reverse(v1.begin(),v1.end());
        ll ans=0;
        ll p=k-1;
        while(p<=v1.size())
        {
            ans+=abs(v1[p])*2;
            p=p+k;
        }
        if(p!=v1.size())
        {
            ans+=abs(v1[v1.size()-1])*2;
        }
        ll q=k-1;
         while(q<=v2.size())
        {
            ans+=v2[q]*2;
            q=q+k;
        }
        if(q!=v2.size())
        {
            ans+=v2[v2.size()-1]*2;
        }
        if(abs(v1[0])>v2[v2.size()-1])
            ans-=abs(v1[0]);
        else ans-=v2[v2.size()-1];


cout<<ans<<endl;

    }
    return 0;
}
