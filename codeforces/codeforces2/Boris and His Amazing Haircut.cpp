#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
       int n,r=0;
       cin>>n;
       ll a[n],b[n];
       vector<int>v;
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
       for(int i=0;i<n;i++)
       {
           cin>>b[i];
       }
       for(int i=0;i<n;i++)
       {
           if((a[i]-b[i])==0)
            continue;
          v.push_back(a[i]-b[i]);
          if((a[i]-b[i])<0)
            r=1;
       }


       int m;
       cin>>m;
       ll ss[m];
       for(int i=0;i<m;i++)
       {
           cin>>ss[i];
       }
       sort(ss,ss+m);
       for(int i=0;i<m)


}
    return 0;
}
