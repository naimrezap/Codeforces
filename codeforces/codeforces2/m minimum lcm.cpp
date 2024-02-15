#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll r=0,n;
        cin>>n;
        ll a=1,b=n-1;

            for(ll i=2;i*i<=n;i++)
            {
                if(n%i==0)
                {
                    a=n/i;
                    b=n-a;

                    break;
                }
            }

                cout<<a<<" "<<b<<endl;


    }
    return 0;
}
