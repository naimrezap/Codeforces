#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    ll t;
    cin>>t;
    while(t--)
    {
        ll n,r=0,r1=0,c=0;
        cin>>n;
        ll a[n];
        set<ll> v;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
                r1++;
               else if(a[i]>1)
                v.insert(a[i]);
                else if(a[i]==1)
                    c++;
        }
        if((r1>=2)|| (v.size()==(n-c)))
            cout<<"YES"<<endl;
        else{
             for(ll i=0;i<n-1;i++)
        {
            for(ll j=1;j<n;j++)
            {

               if(i!=j)
               {
                    ll q=__gcd(a[i],a[j]);
               // cout<<q<<" ";
                if(q>=2)
                {
                    r=1;
                    break;
                }
               }

            }
            if(r==1)
                break;
        }
         if(r==1)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        }


    }

}
