#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
     int n,k;
     cin>>n>>k;
     int arr[n];
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     int i=0,p=1,q=0;
     while(i<n)
     {
         if(arr[i]==p)
         {
             p++;
             q++;
         }
         i++;
     }
     if(q==n)
     {
         cout<<0<<endl;
     }
     else
     {
         int a=n-q;
         if(k>=a)
         {
             cout<<1<<endl;
         }
         else
         {
             int h=a/k;
             if(a%k==0)
             {
                 cout<<h<<endl;
             }
             else cout<<h+1<<endl;
         }
     }
   }
    return 0;
}
