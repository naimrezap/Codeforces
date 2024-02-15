

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
       vector<ll>v(n);
       for(ll i=0;i<n;i++)
       {
           cin>>v[i];
       }

      for(ll i=0;i<n;i++)
      {
          if(v[i]==1)
          {
              v[i]=2;
          }
      }
            for(ll i=1;i<n;i++)
      {
          if(v[i]%v[i-1]==0)
            v[i]++;
      }

       for(int i=0;i<n;i++)
       {
           cout<<v[i]<<" ";
       }
       cout<<endl;

    }
    return 0;

}
