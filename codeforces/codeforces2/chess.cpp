#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long n,s=0;
       cin>>n;
       int a[n],b[n];

       for(int i=0;i<n;i++)
       {
           cin>>a[i];
           s=s+a[i];
       }
        for(int i=0;i<n;i++)
       {
           cin>>b[i];
         //  s=s+b[i];
       }
       sort(b,b+n);
       for(int i=0;i<n-1;i++)
       {
          // cin>>b[i];
          s=s+b[i];
       }
        cout<<s<<endl;

    }
    return 0;
}
