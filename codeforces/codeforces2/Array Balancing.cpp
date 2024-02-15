#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        ll n,m=0;
        cin>>n;
        vector<ll>v(n),v2(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
         for(ll i=0;i<n;i++)
        {
            cin>>v2[i];
        }

         for(ll i=0;i<n;i++)
        {
            if(v[i]<v2[i])
                swap(v[i],v2[i]);
        }
         for(ll i=0;i<n-1;i++)
        {
            m=m+abs(v[i]-v[i+1]);
        }
        for(ll i=0;i<n-1;i++)
        {
            m=m+abs(v2[i]-v2[i+1]);
        }
        cout<<m<<endl;

    }

    return 0;
}
