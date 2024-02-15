#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,a=0,p=0;
    cin>>n;
    char s[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
     for(int i=0;i<n;i++)
     {
         if(s[i]!='x')
         {
               a=0;

         }
         else
         {
             a++;
         }
         if(a==3)
         {
             p++;a-=1;
         }

     }
     cout<<p<<endl;
    return 0;

}
