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
        for(int j=0;j<n;j++)
        {

            cin>>a[j];
        }
        sort(a,a+n);
        ll qq=0;
        for(ll i=0;i<n;i++)
        {
          qq=__gcd(qq,a[i]);


        }
         qq=a[n-1]/qq;
        cout<<qq<<endl;






    }
    return 0;
}

