#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        ll n,x,p,uu=0;
        cin>>n>>x>>p;
        ll y=min(2*n,p);
        for(ll i=1;i<=y;i++)
        {
            ll sum=i*(i+1)/2;
            ll ans=sum+x;
            if(ans%n==0)
            {
                uu=1;
                cout<<"YES"<<endl;
                break;

            }
        }
        if(uu==0)
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
