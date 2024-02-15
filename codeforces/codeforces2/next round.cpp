#include<bits/stdc++.h>
using namespace std;
int main()
{
       int n,k,c=0;
       cin>>n>>k;
       int a[n];
       for(int i=0; i<n; i++)
       {
           cin>>a[i];
       }
       if(a[k-1]>0)
       {
           for(int i=k; i<n; i++)
           {
               if(a[i]==a[k-1])
                c++;
           }
           cout<<k+c<<endl;
       }
       else
       {
           for(int i=0; i<k;i++)
           {
               if(a[i]>0)
                c++;

           }
           cout<<c<<endl;




    }


    return 0;

}
