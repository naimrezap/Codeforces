#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,p=0;
       cin>>n;
       string s;
       cin>>s;
       for(int i=0;i<n;i++)
       {
           if(s[i]=='1')
           {
               while(i<n-1)
               {
                   if(s[i]!=s[i+1])
                    p++;
                   i++;
               }
           }
       }
       cout<<p<<endl;
    }
    return 0;
}

