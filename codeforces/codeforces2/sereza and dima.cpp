#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s1=0,s2=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
       // s1+=a[i];

    }

   for(int i=0,j=n-1;i<j;)
   {
       if(a[i]>a[j])
       {
           s2+=a[i];
           i++;
           if(a[i]>a[j])
           {
               s1+=a[i];
               i++;
           }
           else
           {
               s1+=a[j];
               j--;
           }

       }
       else {
        s2+=a[j];
         j--;
         if(a[i]>a[j])
           {
               s1+=a[i];
               i++;
           }
           else
           {
               s1+=a[j];
               j--;
           }
       }

   }
   if(n%2==1)
   {
       s2=s2+*min_element(a,a+n);
          }

    cout<<s2<<" "<<s1<<endl;
    return 0;
}
