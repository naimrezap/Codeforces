#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for (ll i=0;i<n;i++)
        {
            cin>>a[i];

        }
        sort(a,a+n);
        ll m=*max_element(a,a+n);
        ll mi1=*min_element(a,a+n);
        ll c1=0,c2=0;
        for(ll i=0;i<n;i++)
        {
            if(a[i]==m)
                c1++;
            if(a[i]==mi1)
                {
                    c2++;
                }
        }

         if((c1==n) || (c2==n))
            cout<<n*(n-1)<<endl;
        else
        cout<<c1*2*c2<<endl;
    }
    return 0;
}
