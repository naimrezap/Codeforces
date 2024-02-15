#include<bits/stdc++.h>
using namespace std;
#define ll long long
void naim()
{
    ll n;
    cin>>n;
    ll t=0,s=0;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
        s+=v[i];
    }
    ll ans=-100000,gc;
    for(ll i=0;i<n-1;i++)
    {
        t+=v[i];
        s-=v[i];
         gc=__gcd(t,s);
        ans=max(ans,gc);
    }
    cout<<ans<<endl;

}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        naim();
    }
}
