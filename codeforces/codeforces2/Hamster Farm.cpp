#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m,mod=0,max1=100000000;
    cin>>n>>m;
    ll a[m],b[m];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
        mod=n%a[i];
         b[i]=mod;
    }
    max1=*min_element(b,b+m);
    for(ll i=0;i<m;i++)
    {
        if(b[i]==max1)
        {
            cout<<i+1<<" "<<n/a[i]<<endl;
            break;
        }
    }
    return 0;
}
