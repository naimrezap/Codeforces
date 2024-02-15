
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
     int n;
     cin>>n;
     vector<int> v(n);
     for(int i=0;i<n;i++)
     {
       cin>>v[i];
     }
     int st=0;
     int en=n-1;
     int mid=0,ans=0;

     while(1)
     {

         mid=(en-st)/2;
         int  pr=mid-1;
         int nx=mid+1;
         if(v[mid]<v[pr] && v[mid]<v[nx])
         {
              ans=mid;
              break;
         }
         else if(v[mid]=>v[pr] && v[mid]=>v[nx])
         {
             ans=min(v[pr],v[nx]);
             break;
         }
         else if(v[mid]=>v[pr] && v[mid]<=v[nx])
         {
             if(v[mid]>v[st])
                st=mid+1;
             else
                en=mid-1;


         }

     }
     cout<<ans<<endl;


     }

    return 0;
}
