#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        vector<ll>v(n),v2(n);
        ll col=0,cc=0;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];

                col+=v[i];
                v2[i]=col;
        }
        while(q--)
        {
            ll l,r,k,co,x;
            cin>>l>>r>>k;
            if(l==1)
            x=col-(v2[r-1]);
            else
                x=col-(v2[r-1]-v2[l-2]);
            ll p=(r-l+1)*(k)+x;
            if(p%2==0)
                cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
    return 0;
}
