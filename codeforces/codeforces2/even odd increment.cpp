#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,i,q,k=1,sum=0;

        cin>>n>>q;
       long long  a[n],b[q][2];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
       while(q>=k)
       {
           long long c,d;
           cin>>b[k-1][0];
           cin>>b[k-1][1];
           c=b[k-1][0];
           d=b[k-1][1];
           if(c==0)
           {
               for(int i=0;i<n;i++)
           {
               if(a[i]%2==0)
               {
                   sum=sum+a[i]+d;
                   a[i]=a[i]+d;
               }
               else
                sum=sum+a[i];
           }
           }
           else
           {
                for(int i=0;i<n;i++)
           {
               if(a[i]%2!=0)
               {
                   sum=sum+a[i]+d;
                   a[i]=a[i]+d;
               }
               else
                sum=sum+a[i];
           }
           }


           k++;
            cout<<sum<<endl;
            sum=0;
       }



    }
    return 0;
}

