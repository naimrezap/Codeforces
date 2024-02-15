

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int p=1;p<=t;p++)
    {
        int n,ss=0,gride=0,num=0;
        cin>>n;
       string s1,s2,s3;
       cin>>s1;
       cin>>s2;
       cin>>s3;
       for(int i=0;i<n;i++)
       {
           gride++;
           if(s2[i]=='X')
           {
               if(gride>3)
               {
                   num=num+gride/4;
                   gride=0;
               }
           }
           else if(s1[i]=='X' && s3[i]=='X')
           {
               if(gride>1)
               {
                   num=num+gride/4;
                   gride=0;
               }
           }
           if(num>1 )
       }



         if(gride>3)
               {
                   num=num+gride/4;

               }
        if(num%2==0)
              cout<<"case "<<p<<": "<<"Jhinuk"<<endl;
        else
            cout<<"case "<<p<<": "<<"Grandma"<<endl;


    }
    return 0;
}
