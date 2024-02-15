#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,s=-1,num=1;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++)
        cin>>a[i];
       sort(a,a+n);
       for(int i=0;i<n-1;i++)
       {
           if(a[i]!=a[i+1])
           {
              num=1;
           }
           else
           {
               num++;
               if(num>=3)
               {
                   s=a[i];
                    break;
               }
           }


       }
        cout<<s<<endl;

    }
    return 0;
}
