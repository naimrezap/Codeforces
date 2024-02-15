#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll r=a[0];
        for(int i=1;i<n;i++)
        {
            r=__gcd(r,a[i]);
        }
        if(r==1)
            cout<<0<<endl;
        else
        {
            if((__gcd(r,n))==1)
            cout<<1<<endl;
            else if((__gcd(r,n-1))==1)
                cout<<2<<endl;
            else
                cout<<3<<endl;


        }


    }
}
