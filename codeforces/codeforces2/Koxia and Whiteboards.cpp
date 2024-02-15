
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       ll n,m;
       cin>>n>>m;
       ll a[n],b[m];
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
       for(int i=0;i<m;i++)
       {
           cin>>b[i];
       }
       sort(a,a+n);
      for(int i=0;i<m;i++)
      {
          a[0]=b[i];
          sort(a,a+n);
      }
      ll s=0;
      for(int i=0;i<n;i++)
      {
          s+=a[i];
      }
      cout<<s<<endl;

    }
    return 0;
}
